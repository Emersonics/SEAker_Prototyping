// Fill out your copyright notice in the Description page of Project Settings.


#include "Almanac_UI.h"

#include "SEAker_GM_cpp.h"
#include "Components/Button.h"
#include "Components/Image.h"

void UAlmanac_UI::NativeConstruct()
{
	Super::NativeConstruct();
	// attach events in the Exit button on released
	if (Btn_Exit)
	{
		// attach a function
		Btn_Exit->OnReleased.AddDynamic(this, &UAlmanac_UI::Event_OnExit);
	}
	// attach events in the Exit button on released
	if (Btn_Creatures)
	{
		// attach a function
		Btn_Creatures->OnReleased.AddDynamic(this, &UAlmanac_UI::Event_OnCreatures);
	}
	// attach events in the Exit button on released
	if (Btn_Obstacles)
	{
		// attach a function
		Btn_Obstacles->OnReleased.AddDynamic(this, &UAlmanac_UI::Event_OnObstacles);
	}
	// attach events in the Exit button on released
	if (Btn_Levels)
	{
		// attach a function
		Btn_Levels->OnReleased.AddDynamic(this, &UAlmanac_UI::Event_OnLevels);
	}
	// attach events in the Exit button on released
	if (Btn_0)
	{
		// attach a function
		Btn_0->OnReleased.AddDynamic(this, &UAlmanac_UI::Event_OnBtn0);
	}
	// attach events in the Exit button on released
	if (Btn_1)
	{
		// attach a function
		Btn_1->OnReleased.AddDynamic(this, &UAlmanac_UI::Event_OnBtn1);
	}
	// attach events in the Exit button on released
	if (Btn_2)
	{
		// attach a function
		Btn_2->OnReleased.AddDynamic(this, &UAlmanac_UI::Event_OnBtn2);
	}
	// attach events in the Exit button on released
	if (Btn_3)
	{
		// attach a function
		Btn_3->OnReleased.AddDynamic(this, &UAlmanac_UI::Event_OnBtn3);
	}
	// attach events in the Exit button on released
	if (Btn_4)
	{
		// attach a function
		Btn_4->OnReleased.AddDynamic(this, &UAlmanac_UI::Event_OnBtn4);
	}
}

void UAlmanac_UI::Event_OnExit()
{
	ASEAker_GM_cpp* gm = Cast<ASEAker_GM_cpp>(GetWorld()->GetAuthGameMode());
	gm->AlmanacWidget->RemoveFromParent();
	gm->AddHUDToVP();
}

void UAlmanac_UI::Event_OnCreatures()
{
}

void UAlmanac_UI::Event_OnObstacles()
{
}

void UAlmanac_UI::Event_OnLevels()
{
}

void UAlmanac_UI::Event_OnBtn0()
{
}

void UAlmanac_UI::Event_OnBtn1()
{
}

void UAlmanac_UI::Event_OnBtn2()
{
}

void UAlmanac_UI::Event_OnBtn3()
{
}

void UAlmanac_UI::Event_OnBtn4()
{
}
