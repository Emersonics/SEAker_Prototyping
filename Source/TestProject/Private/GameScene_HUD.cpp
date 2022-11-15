// Fill out your copyright notice in the Description page of Project Settings.


#include "GameScene_HUD.h"

#include "SEAker_GM_cpp.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UGameScene_HUD::NativeConstruct()
{
	Super::NativeConstruct();
	// attach events in the Exit button on released
	if (Btn_Exit)
	{
		// attach a function
		Btn_Exit->OnReleased.AddDynamic(this, &UGameScene_HUD::Event_OnExit);
	}
	// attach events in the Almanac button on released
	if (Btn_Almanac)
	{
		// attach a function
		Btn_Almanac->OnReleased.AddDynamic(this, &UGameScene_HUD::Event_OnAlmanac);
	}
	// attach events in the Help button on released
	if (Btn_Help)
	{
		// attach a function
		Btn_Help->OnReleased.AddDynamic(this, &UGameScene_HUD::Event_Help);
	}
}

void UGameScene_HUD::Event_OnExit()
{
	UGameplayStatics::OpenLevel(this, "MainMenu");
}

void UGameScene_HUD::Event_OnAlmanac()
{
	ASEAker_GM_cpp* gm = Cast<ASEAker_GM_cpp>(GetWorld()->GetAuthGameMode());
	gm->HUDWidget->RemoveFromParent();
	gm->AddAlmanacToVP();
}

void UGameScene_HUD::Event_Help()
{
}
