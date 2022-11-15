// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu_UI.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenu_UI::NativeConstruct()
{
	Super::NativeConstruct();
	// attach events in the Quit button on released
	if (Btn_Levels)
	{
		// attach a function
		Btn_Levels->OnReleased.AddDynamic(this, &UMainMenu_UI::Event_OnLevels);
	}
	// attach events in the Quit button on released
	if (Btn_Quit)
	{
		// attach a function
		Btn_Quit->OnReleased.AddDynamic(this, &UMainMenu_UI::Event_OnQuit);
	}
}

void UMainMenu_UI::Event_OnLevels()
{
	UGameplayStatics::OpenLevel(this, "TemporaryLevel1Design");
}

void UMainMenu_UI::Event_OnQuit()
{
	APlayerController* SpecificPlayer = GetWorld()->GetFirstPlayerController();
	UKismetSystemLibrary::QuitGame(GetWorld(), SpecificPlayer, EQuitPreference::Quit, true);
}
