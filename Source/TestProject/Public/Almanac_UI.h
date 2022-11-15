// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Almanac_UI.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UAlmanac_UI : public UUserWidget
{
	GENERATED_BODY()
protected:
	// upper panel buttons
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Exit;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Creatures;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Obstacles;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Levels;
	// title name
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Txt_title;
	// scroll bar buttons
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_0;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_1;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_2;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_3;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_4;
	// image creature Img_Creature
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UImage* Img_Info;
	// creature info
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Txt_Name;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Txt_Description;
	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintCallable)
		void Event_OnExit();
	UFUNCTION(BlueprintCallable)
		void Event_OnCreatures();
	UFUNCTION(BlueprintCallable)
		void Event_OnObstacles();
	UFUNCTION(BlueprintCallable)
		void Event_OnLevels();
	UFUNCTION(BlueprintCallable)
		void Event_OnBtn0();
	UFUNCTION(BlueprintCallable)
		void Event_OnBtn1();
	UFUNCTION(BlueprintCallable)
		void Event_OnBtn2();
	UFUNCTION(BlueprintCallable)
		void Event_OnBtn3();
	UFUNCTION(BlueprintCallable)
		void Event_OnBtn4();
};
