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
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* Btn_Exit;
	virtual void NativeConstruct() override;
	UFUNCTION()
		void Event_OnExit();
};
