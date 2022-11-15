// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameScene_HUD.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UGameScene_HUD : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UImage* CrossHair_Img;
protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Exit;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Almanac;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Help;
	virtual void NativeConstruct() override;
	UFUNCTION()
		void Event_OnExit();
	UFUNCTION()
		void Event_OnAlmanac();
	UFUNCTION()
		void Event_Help();
	
};
