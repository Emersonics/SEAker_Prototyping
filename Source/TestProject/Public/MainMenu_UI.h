// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu_UI.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UMainMenu_UI : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Levels;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Quit;

	virtual void NativeConstruct() override;
	UFUNCTION()
		void Event_OnLevels();
	UFUNCTION()
		void Event_OnQuit();
};
