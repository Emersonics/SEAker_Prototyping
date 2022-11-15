// Fill out your copyright notice in the Description page of Project Settings.


#include "SEAker_GM_cpp.h"

#include "Almanac_UI.h"
#include "GameScene_HUD.h"
#include "MainMenu_UI.h"

ASEAker_GM_cpp::ASEAker_GM_cpp()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;
	PrimaryActorTick.bAllowTickOnDedicatedServer = false;

	//maybe assign the default pawn here depending on the level?
	this->DefaultPawnClass = ATurtleCharacter::StaticClass();

	UE_LOG(LogTemp, Warning, TEXT("Call Constructor"));
}

ASEAker_GM_cpp::~ASEAker_GM_cpp()
{
}

void ASEAker_GM_cpp::BeginPlay()
{
	AlmanacWidget = Cast<UAlmanac_UI>(CreateWidget(GetWorld(), Almanac_Class));
	MainMenuWidget = Cast<UMainMenu_UI>(CreateWidget(GetWorld(), MainMenu_Class));
	HUDWidget = Cast<UGameScene_HUD>(CreateWidget(GetWorld(), HUD_Class));
	UE_LOG(LogTemp, Warning, TEXT("Call Begin Play"));
}

void ASEAker_GM_cpp::AddAlmanacToVP()
{
	if (IsValid(Almanac_Class))
	{
		UE_LOG(LogTemp, Warning, TEXT("Almanac Valid"));

		if (AlmanacWidget != nullptr)
		{
			AlmanacWidget->AddToViewport(0);
			UE_LOG(LogTemp, Warning, TEXT("Almanac Added to Viewport"));
		}
		APlayerController* PController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		PController->SetShowMouseCursor(true);
		PController->SetPause(true);
	}
}

void ASEAker_GM_cpp::AddMainMenuToVP()
{
	if (IsValid(MainMenu_Class))
	{
		UE_LOG(LogTemp, Warning, TEXT("MainMenu Valid"));

		if (MainMenuWidget != nullptr)
		{
			MainMenuWidget->AddToViewport(0);
			UE_LOG(LogTemp, Warning, TEXT("MainMenu Added to Viewport"));
		}
		APlayerController* PController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		PController->SetShowMouseCursor(true);
	}
}

void ASEAker_GM_cpp::AddHUDToVP()
{
	if (IsValid(HUD_Class))
	{
		UE_LOG(LogTemp, Warning, TEXT("HUD Valid"));

		HUDWidget = Cast<UGameScene_HUD>(CreateWidget(GetWorld(), HUD_Class));
		if (HUDWidget != nullptr)
		{
			HUDWidget->AddToViewport(0);
			UE_LOG(LogTemp, Warning, TEXT("HUD Added to Viewport"));
		}
		APlayerController* PController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		PController->SetShowMouseCursor(false);
		PController->SetPause(false);
	}
}