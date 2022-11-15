// Fill out your copyright notice in the Description page of Project Settings.


#include "Almanac_UI.h"

#include "SEAker_GM_cpp.h"
#include "Components/Button.h"

void UAlmanac_UI::NativeConstruct()
{
	Super::NativeConstruct();
	// attach events in the Exit button on released
	if (Btn_Exit)
	{
		// attach a function
		Btn_Exit->OnReleased.AddDynamic(this, &UAlmanac_UI::Event_OnExit);
	}
}

void UAlmanac_UI::Event_OnExit()
{
	ASEAker_GM_cpp* gm = Cast<ASEAker_GM_cpp>(GetWorld()->GetAuthGameMode());
	gm->AlmanacWidget->RemoveFromParent();
	gm->AddHUDToVP();
}
