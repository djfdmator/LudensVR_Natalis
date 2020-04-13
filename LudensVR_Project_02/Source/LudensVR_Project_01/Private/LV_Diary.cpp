// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "LV_Diary.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
#include "LV_Pen.h"
#include "LV_DiaryWidget.h"
#include "LV_Event.h"

#include "Engine.h"


#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,text)
#define printf(text,fstring) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,FString::Printf(TEXT(text),fstring))



// Sets default values
ALV_Diary::ALV_Diary()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FClassFinder<UUserWidget> WB_DiaryWidget_Menu(TEXT("WidgetBlueprint'/Game/Natalis/Diary/InteractiveScreenTut/DiaryWidget_Menu.DiaryWidget_Menu_C'"));
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_DiaryWidget_Menu_Button_G(TEXT("WidgetBlueprint'/Game/Natalis/Diary/InteractiveScreenTut/DiaryWidget_Menu_Button_G.DiaryWidget_Menu_Button_G_C'"));
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_DiaryWidget_Menu_Button_Q(TEXT("WidgetBlueprint'/Game/Natalis/Diary/InteractiveScreenTut/DiaryWidget_Menu_Button_Q.DiaryWidget_Menu_Button_Q_C'"));
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_DiaryWidget_Page2(TEXT("WidgetBlueprint'/Game/Natalis/Diary/InteractiveScreenTut/DiaryWidget_Page2.DiaryWidget_Page2_C'"));
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_DiaryWidget_Page3(TEXT("WidgetBlueprint'/Game/Natalis/Diary/InteractiveScreenTut/DiaryWidget_Page3.DiaryWidget_Page3_C'"));
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_DiaryWidget_Page4(TEXT("WidgetBlueprint'/Game/Natalis/Diary/InteractiveScreenTut/DiaryWidget_Page4.DiaryWidget_Page4_C'"));
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_DiaryWidget_Page5(TEXT("WidgetBlueprint'/Game/Natalis/Diary/InteractiveScreenTut/DiaryWidget_Page5.DiaryWidget_Page5_C'"));
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_DiaryWidget_Page6(TEXT("WidgetBlueprint'/Game/Natalis/Diary/InteractiveScreenTut/DiaryWidget_Page6.DiaryWidget_Page6_C'"));
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_DiaryWidget_Page7(TEXT("WidgetBlueprint'/Game/Natalis/Diary/InteractiveScreenTut/DiaryWidget_Page7.DiaryWidget_Page7_C'"));
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_DiaryWidget_Page8(TEXT("WidgetBlueprint'/Game/Natalis/Diary/InteractiveScreenTut/DiaryWidget_Page8.DiaryWidget_Page8_C'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SKM_Diary(TEXT("SkeletalMesh'/Game/Natalis/Diary/Mesh/bookAni_ue4_vTest_20190315.bookAni_ue4_vTest_20190315'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> AS_Diary(TEXT("AnimSequence'/Game/Natalis/Diary/Mesh/BookAni_Onlyflat_Anim.BookAni_Onlyflat_Anim'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> AS_DiaryReverse(TEXT("AnimSequence'/Game/Natalis/Diary/Mesh/BookAni_Onlyflat_Reverse_Anim.BookAni_Onlyflat_Reverse_Anim'"));

	DiaryMenuWidget_Class = WB_DiaryWidget_Menu.Class;
	WidgetMenu_Button_G_Class = WB_DiaryWidget_Menu_Button_G.Class;
	WidgetMenu_Button_Q_Class = WB_DiaryWidget_Menu_Button_Q.Class;
	DiaryWidget_Page2_Class = WB_DiaryWidget_Page2.Class;
	DiaryWidget_Page3_Class = WB_DiaryWidget_Page3.Class;
	DiaryWidget_Page4_Class = WB_DiaryWidget_Page4.Class;
	DiaryWidget_Page5_Class = WB_DiaryWidget_Page5.Class;
	DiaryWidget_Page6_Class = WB_DiaryWidget_Page6.Class;
	DiaryWidget_Page7_Class = WB_DiaryWidget_Page7.Class;
	DiaryWidget_Page8_Class = WB_DiaryWidget_Page8.Class;
	IsWidget = true;
	OnOverlapButton = true;
	PageNumber = 2;
	OnOvertimeButton = true;


	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RootMesh"));
	Anim = CreateDefaultSubobject<UAnimSequence>(TEXT("DiaryAnim"));
	AnimReverse = CreateDefaultSubobject<UAnimSequence>(TEXT("DiaryAnimReverse"));
	WidgetLeft = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetLeft"));
	WidgetRight = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetRight"));
	WidgetMenu_G_Q = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetMenu_G_Q"));

	BoxCollider_G = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider_Go"));
	BoxCollider_Q = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider_Quit"));
	BoxCollider_YES = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider_Yes"));
	BoxCollider_NO = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider_No"));
	BoxCollider_Before = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider_Before"));
	BoxCollider_Next = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider_Next"));



	RootComponent = SkeletalMesh;
	WidgetMenu_G_Q->SetupAttachment(SkeletalMesh);
	WidgetLeft->SetupAttachment(SkeletalMesh);
	BoxCollider_G->SetupAttachment(WidgetLeft);
	BoxCollider_Q->SetupAttachment(WidgetLeft);
	BoxCollider_Before->SetupAttachment(WidgetLeft);

	WidgetRight->SetupAttachment(SkeletalMesh);
	BoxCollider_YES->SetupAttachment(WidgetRight);
	BoxCollider_NO->SetupAttachment(WidgetRight);
	BoxCollider_Next->SetupAttachment(WidgetRight);




	SkeletalMesh->SetRelativeLocation(FVector(0.0f, -390.0f, 200.0f));
	SkeletalMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	//SkeletalMesh->SetCollisionProfileName("PhysicsActor");



	WidgetMenu_G_Q->SetRelativeLocation(FVector(5.75, 0.5f, 0.8f));
	WidgetMenu_G_Q->SetRelativeRotation(FRotator(90.0f, 90.0f, 0.0f));
	WidgetMenu_G_Q->SetRelativeScale3D(FVector(0.02f, 0.02f, 0.02f));
	WidgetMenu_G_Q->SetDrawSize(FVector2D(475.0f, 742.0f));
	WidgetMenu_G_Q->SetWidgetSpace(EWidgetSpace::World);
	WidgetMenu_G_Q->SetVisibility(false);


	WidgetLeft->SetRelativeLocation(FVector(-6.25, 0.5f, 0.75f));
	WidgetLeft->SetRelativeRotation(FRotator(90.0f, 90.0f, 0.0f));
	WidgetLeft->SetRelativeScale3D(FVector(0.02f, 0.02f, 0.02f));
	WidgetLeft->SetDrawSize(FVector2D(475.0f, 742.0f));
	WidgetLeft->SetWidgetSpace(EWidgetSpace::World);
	WidgetLeft->SetVisibility(true);



	BoxCollider_G->SetRelativeLocation(FVector(-2.5f, 390.0f, 72.0f));
	BoxCollider_G->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	BoxCollider_G->SetRelativeScale3D(FVector(0.25f, 3.5f, 0.75f));
	BoxCollider_G->BodyInstance.SetCollisionProfileName(TEXT("Trigger"));
	//BoxCollider_G->SetCollisionProfileName(TEXT("Trigger"));
	BoxCollider_G->SetGenerateOverlapEvents(true);


	BoxCollider_Q->SetRelativeLocation(FVector(-2.5f, 395.0f, -23.5f));
	BoxCollider_Q->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	BoxCollider_Q->SetRelativeScale3D(FVector(0.25f, 3.5f, 0.75f));
	BoxCollider_Q->BodyInstance.SetCollisionProfileName(TEXT("Trigger"));
	BoxCollider_Q->SetGenerateOverlapEvents(true);

	BoxCollider_Before->SetRelativeLocation(FVector(-2.5f, 180.0f, -344.0f));
	BoxCollider_Before->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	BoxCollider_Before->SetRelativeScale3D(FVector(0.25f, 1.5f, 0.75f));
	BoxCollider_Before->BodyInstance.SetCollisionProfileName(TEXT("Trigger"));
	BoxCollider_Before->SetGenerateOverlapEvents(false);





	WidgetRight->SetRelativeLocation(FVector(5.75, 0.5f, 0.8f));
	WidgetRight->SetRelativeRotation(FRotator(90.0f, 90.0f, 0.0f));
	WidgetRight->SetRelativeScale3D(FVector(0.02f, 0.02f, 0.02f));
	WidgetRight->SetDrawSize(FVector2D(475.0f, 742.0f));
	WidgetRight->SetWidgetSpace(EWidgetSpace::World);
	WidgetRight->SetVisibility(true);


	BoxCollider_YES->SetRelativeLocation(FVector(-10.0f, 90.0f, -120.0f));
	BoxCollider_YES->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	BoxCollider_YES->SetRelativeScale3D(FVector(0.25f, 0.75f, 0.75f));
	BoxCollider_YES->BodyInstance.SetCollisionProfileName(TEXT("Trigger"));
	BoxCollider_YES->SetGenerateOverlapEvents(false);


	BoxCollider_NO->SetRelativeLocation(FVector(-10.0f, -80.0f, -120.0f));
	BoxCollider_NO->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	BoxCollider_NO->SetRelativeScale3D(FVector(0.25f, 1.5f, 0.75f));
	BoxCollider_NO->BodyInstance.SetCollisionProfileName(TEXT("Trigger"));
	BoxCollider_NO->SetGenerateOverlapEvents(false);


	BoxCollider_Next->SetRelativeLocation(FVector(-2.5f, -193.0f, -330.0f));
	BoxCollider_Next->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	BoxCollider_Next->SetRelativeScale3D(FVector(0.25f, 1.5f, 0.75f));
	BoxCollider_Next->BodyInstance.SetCollisionProfileName(TEXT("Trigger"));
	BoxCollider_Next->SetGenerateOverlapEvents(true);





	if (WB_DiaryWidget_Menu.Succeeded())
	{
		WidgetLeft->SetWidget(m_DiaryMenuWidget);
		//WidgetLeft->SetWidgetClass(DiaryMenuWidget_Class);
	}

	if (SKM_Diary.Succeeded())
	{
		SkeletalMesh->SetSkeletalMesh(SKM_Diary.Object);
	}

	if (AS_Diary.Succeeded())
	{
		Anim = AS_Diary.Object;
	}
	if (AS_DiaryReverse.Succeeded())
	{
		AnimReverse = AS_DiaryReverse.Object;
	}

	if (WB_DiaryWidget_Menu_Button_G.Succeeded())
	{
		WidgetMenu_G_Q->SetWidgetClass(WidgetMenu_Button_G_Class);
	}

	Tags.Add(FName("Diary"));

}
void ALV_Diary::SetDiaryPage(EDIARYPAGE value)
{

	DiaryPage = value;

	switch (DiaryPage)
	{
	case EDIARYPAGE::PAGE_GOTOSTART:

		WidgetMenu_G_Q->SetWidgetClass(WidgetMenu_Button_G_Class);
		WidgetMenu_G_Q->SetVisibility(true);
		WidgetRight->SetVisibility(false);
		m_DiaryMenuWidget->Check1_Opacity(1.0f);

		//WidgetRight의 Button들 Overlap 가능
		BoxCollider_YES->SetGenerateOverlapEvents(true);
		BoxCollider_NO->SetGenerateOverlapEvents(true);

		ButtonEnum = EButtonEnum::BE_Go;
		break;

	case EDIARYPAGE::PAGE_QUIT:
		
		WidgetMenu_G_Q->SetWidgetClass(WidgetMenu_Button_Q_Class);
		WidgetMenu_G_Q->SetVisibility(true);
		WidgetRight->SetVisibility(false);
		m_DiaryMenuWidget->Check2_Opacity(1.0f);

		//WidgetRight의 Button들 Overlap 가능
		BoxCollider_YES->SetGenerateOverlapEvents(true);
		BoxCollider_NO->SetGenerateOverlapEvents(true);

		ButtonEnum = EButtonEnum::BE_Quit;

		break;

	case EDIARYPAGE::PAGE_MENU:
		WidgetLeft->SetWidget(m_DiaryMenuWidget);
		//WidgetLeft->SetWidgetClass(DiaryMenuWidget_Class);
		WidgetLeft->SetRelativeLocation(FVector(0.2f, 0.5f, 0.75f));
		WidgetLeft->SetDrawSize(FVector2D(1200.0f, 742.0f));
		WidgetMenu_G_Q->SetVisibility(false);

		BoxCollider_Before->SetGenerateOverlapEvents(false);
		CollisionMenuEnabled(true);

	case EDIARYPAGE::PAGE_2:
		
		
		WidgetRight->SetWidget(m_DiaryPage2Widget);

		//WidgetRight->SetWidgetClass(DiaryWidget_Page2_Class);

		//수정 필요
		//calcOpacity(DiaryPage);
		
		break;

	case EDIARYPAGE::PAGE_3:

		WidgetLeft->SetWidget(m_DiaryPage3Widget);

		//WidgetLeft->SetWidgetClass(DiaryWidget_Page3_Class);
		WidgetLeft->SetRelativeLocation(FVector(-6.25, 0.5f, 0.75f));
		WidgetLeft->SetDrawSize(FVector2D(475.0f, 742.0f));
		BoxCollider_Before->SetGenerateOverlapEvents(true);
		CollisionMenuEnabled(false);

		//수정 필요
		//calcOpacity(DiaryPage);


	case EDIARYPAGE::PAGE_4:
		WidgetRight->SetWidgetClass(DiaryWidget_Page4_Class);

		break;
	case EDIARYPAGE::PAGE_5:

		WidgetLeft->SetWidgetClass(DiaryWidget_Page5_Class);

	case EDIARYPAGE::PAGE_6:

		BoxCollider_Next->SetGenerateOverlapEvents(true);
		WidgetRight->SetWidgetClass(DiaryWidget_Page6_Class);
		break;
	case EDIARYPAGE::PAGE_7:

		WidgetLeft->SetWidgetClass(DiaryWidget_Page7_Class);

	case EDIARYPAGE::PAGE_8:

		BoxCollider_Next->SetGenerateOverlapEvents(false);
		WidgetRight->SetWidgetClass(DiaryWidget_Page8_Class);

		break;

	default:
		break;

	}
}
void ALV_Diary::calcOpacity(EDIARYPAGE _page)
{
	if (_event->GetObject_1()&&_page== EDIARYPAGE::PAGE_2)
	{
	    m_DiaryPage2Widget->Newspaper01_Opacity(1.0f);

	}
	if (_event->GetObject_2()&&_page== EDIARYPAGE::PAGE_3)
	{
		m_DiaryPage3Widget->ChildPaint_Opacity(1.0f);

	}

}

EDIARYPAGE ALV_Diary::GetDiaryPage()
{
	return DiaryPage;
}

// Called when the game starts or when spawned
void ALV_Diary::BeginPlay()
{
	Super::BeginPlay();




	BoxCollider_G->OnComponentBeginOverlap.AddDynamic(this, &ALV_Diary::OnOverlapBegin);
	BoxCollider_Q->OnComponentBeginOverlap.AddDynamic(this, &ALV_Diary::OnOverlapBegin);
	BoxCollider_YES->OnComponentBeginOverlap.AddDynamic(this, &ALV_Diary::OnOverlapBegin);
	BoxCollider_NO->OnComponentBeginOverlap.AddDynamic(this, &ALV_Diary::OnOverlapBegin);
	BoxCollider_Before->OnComponentBeginOverlap.AddDynamic(this, &ALV_Diary::OnOverlapBegin);
	BoxCollider_Next->OnComponentBeginOverlap.AddDynamic(this, &ALV_Diary::OnOverlapBegin);

	BoxCollider_G->OnComponentEndOverlap.AddDynamic(this, &ALV_Diary::OnOverlapEnd);
	BoxCollider_Q->OnComponentEndOverlap.AddDynamic(this, &ALV_Diary::OnOverlapEnd);
	BoxCollider_YES->OnComponentEndOverlap.AddDynamic(this, &ALV_Diary::OnOverlapEnd);
	BoxCollider_NO->OnComponentEndOverlap.AddDynamic(this, &ALV_Diary::OnOverlapEnd);
	BoxCollider_Before->OnComponentEndOverlap.AddDynamic(this, &ALV_Diary::OnOverlapEnd);
	BoxCollider_Next->OnComponentEndOverlap.AddDynamic(this, &ALV_Diary::OnOverlapEnd);

	//Create Widget
	m_DiaryMenuWidget = CreateWidget <ULV_DiaryWidget>(GetWorld(), DiaryMenuWidget_Class);
	//Create Widget
	m_DiaryPage2Widget = CreateWidget <ULV_DiaryWidget>(GetWorld(), DiaryWidget_Page2_Class);
	//Create Widget
	m_DiaryPage3Widget = CreateWidget <ULV_DiaryWidget>(GetWorld(), DiaryWidget_Page3_Class);
	//Create Widget
	m_DiaryPage4Widget = CreateWidget <ULV_DiaryWidget>(GetWorld(), DiaryWidget_Page4_Class); 
	//Create Widget
	m_DiaryPage5Widget = CreateWidget <ULV_DiaryWidget>(GetWorld(), DiaryWidget_Page5_Class); 
	//Create Widget
	m_DiaryPage6Widget = CreateWidget <ULV_DiaryWidget>(GetWorld(), DiaryWidget_Page6_Class);
	
	
	DiaryPage = EDIARYPAGE::PAGE_MENU;
	SetDiaryPage(DiaryPage);

	//Animation
	SkeletalMesh->PlayAnimation(AnimReverse, false);

	//event
	for (TActorIterator<ALV_Event> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		if (!ActorItr->GetName().Compare("LV_Event_2"))
			_event = *ActorItr;
	}

}


void ALV_Diary::OnExplode()
{
	//if (--ButtonDelayCount <= 0)
	//{
	//	GetWorldTimerManager().ClearTimer(MemberTimerHandle);
	//	print("Delay");
	//	// MemberTimerHandle can now be reused for any other Timer.
	//}
	OnOvertimeButton = true;
}


// Called every frame
void ALV_Diary::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_Diary::SaveGame()
{

}

void ALV_Diary::LoadGame()
{

}

void ALV_Diary::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	//펜 촉이 오버랩 되었는지, 버튼에 PenMesh가 오버랩되었는지 , n초가 지났는지
	if (OtherComp->ComponentHasTag("PenBox") && OnOverlapButton && OnOvertimeButton)
	{
		//펜이 수첩을 뚫고 다시 뗄때와 시간간격 제한 
		OnOverlapButton = false;
		OnOvertimeButton = false;
		GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ALV_Diary::OnExplode, 2.0f, false);

		if (IsWidget)         //MainButton을 누르지 않았다면
		{
			//Button_G가 Overlap되면 체크이미지와 WidgetButton_G 띄우기
			if (OverlappedComponent == BoxCollider_G)
			{
				DiaryPage = EDIARYPAGE::PAGE_GOTOSTART;
				SetDiaryPage(DiaryPage); //316 -687 437

				IsWidget = !IsWidget;

			}
			//Button_Q가 Overlap되면 체크이미지와 WidgetButton_Q 띄우기
			else if (OverlappedComponent == BoxCollider_Q)
			{
				DiaryPage = EDIARYPAGE::PAGE_QUIT;
				SetDiaryPage(DiaryPage);

				IsWidget = !IsWidget;

			}

			//Button_Before이 Overlap되면 애니메이션과 다른 위젯 띄우기
			else if (OverlappedComponent == BoxCollider_Before)
			{
				SkeletalMesh->PlayAnimation(Anim, false);

				if (PageNumber > 3)
				{
					PageNumber -= 2;
				}
				DiaryPage = (EDIARYPAGE)PageNumber;
				
				SetDiaryPage(DiaryPage);
			}

			//Button_Next이 Overlap되면 v애니메이션과 다른 위젯 띄우기
			else if (OverlappedComponent == BoxCollider_Next)
			{
				SkeletalMesh->PlayAnimation(AnimReverse, false);

				if (PageNumber < 8)
				{
					PageNumber += 2;
				}
				DiaryPage = (EDIARYPAGE)PageNumber;
				SetDiaryPage(DiaryPage);
			}
		}
		else                    //MainButton을 눌렀다면
		{
			//Button_Yes이 Overlap되면
			if (OverlappedComponent == BoxCollider_YES)
			{
				switch (ButtonEnum)
				{
					// 게임 정보 저장후 Main menu Level로 이동
				case EButtonEnum::BE_Go:
					GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");

					break;

					//게임 정보 저장후 게임 종료
				case EButtonEnum::BE_Quit:

					GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
					break;

				default:
					break;
				}

				IsWidget = !IsWidget;
				BoxCollider_YES->SetGenerateOverlapEvents(false);
				BoxCollider_NO->SetGenerateOverlapEvents(false);
			}

			//Button_No이 Overlap되면 WidgetRight 닫기
			else if (OverlappedComponent == BoxCollider_NO)
			{

				WidgetMenu_G_Q->SetVisibility(false);
				WidgetRight->SetVisibility(true);
				m_DiaryMenuWidget->Check1_Opacity(0.0f);
				m_DiaryMenuWidget->Check2_Opacity(0.0f);
				IsWidget = !IsWidget;


				BoxCollider_YES->SetGenerateOverlapEvents(false);
				BoxCollider_NO->SetGenerateOverlapEvents(false);
			}
		}
		//printf("overlapActor = %s", *OtherActor->GetName());
	}
}

//PenMesh가 Button에 벗어났는지
void ALV_Diary::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherComp->ComponentHasTag("Pen"))
	{
		OnOverlapButton = true;
	}
}


//BoxCollider Event Enable
void ALV_Diary::CollisionMenuEnabled(bool IsMenu)
{
	if (IsMenu)
	{
		BoxCollider_G->SetGenerateOverlapEvents(true);
		BoxCollider_Q->SetGenerateOverlapEvents(true);

		BoxCollider_YES->SetGenerateOverlapEvents(true);
		BoxCollider_NO->SetGenerateOverlapEvents(true);
	}
	else
	{
		BoxCollider_G->SetGenerateOverlapEvents(false);
		BoxCollider_Q->SetGenerateOverlapEvents(false);

		BoxCollider_YES->SetGenerateOverlapEvents(false);
		BoxCollider_NO->SetGenerateOverlapEvents(false);
	}
}

//Pickup
void ALV_Diary::Pickup_Implementation(USceneComponent* AttachTo)
{
	SkeletalMesh->SetSimulatePhysics(false);
	FAttachmentTransformRules AttachmentTransformRules(EAttachmentRule::KeepWorld, false);
	GetRootComponent()->AttachToComponent(AttachTo, AttachmentTransformRules);
}