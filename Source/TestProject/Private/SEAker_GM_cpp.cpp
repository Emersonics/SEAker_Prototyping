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
}

ASEAker_GM_cpp::~ASEAker_GM_cpp()
{
}

void ASEAker_GM_cpp::BeginPlay()
{
	AddMainMenuToVP();
	UE_LOG(LogTemp, Warning, TEXT("Call Begin Play"));
}

void ASEAker_GM_cpp::AddAlmanacToVP()
{
	if (IsValid(Almanac_Class))
	{
		UE_LOG(LogTemp, Warning, TEXT("Almanac Valid"));
		AlmanacWidget = Cast<UAlmanac_UI>(CreateWidget(GetWorld(), Almanac_Class));

		if (AlmanacWidget != nullptr)
		{
			AlmanacWidget->AddToViewport();
			UE_LOG(LogTemp, Warning, TEXT("Almanac Added to Viewport"));
		}
	}
}

void ASEAker_GM_cpp::AddMainMenuToVP()
{
	if (IsValid(MainMenu_Class))
	{
		UE_LOG(LogTemp, Warning, TEXT("MainMenu Valid"));
		MainMenuWidget = Cast<UMainMenu_UI>(CreateWidget(GetWorld(), MainMenu_Class));

		if (MainMenuWidget != nullptr)
		{
			MainMenuWidget->AddToViewport();
			UE_LOG(LogTemp, Warning, TEXT("MainMenu Added to Viewport"));
		}
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
			HUDWidget->AddToViewport();
			UE_LOG(LogTemp, Warning, TEXT("HUD Added to Viewport"));
		}
	}
}