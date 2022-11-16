// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnumsHandler.generated.h"

UENUM(BlueprintType,Category="FishName")
enum FishName
{
	HORSESHOE_CRAB = 0,
	SEAHORSE,
	FINGERED_DRAGONET,
	DECORATOR_CRAB,
	STARFISH,
	SEA_URCHIN,
	MANTIS_SHRIMP,
	CLOWNFISH_AI,
	NONE
};

UENUM(BlueprintType, Category = "BiomeName")
enum BiomeName
{
	BIOME1 = 0,
	BIOME2,
	BIOME3
};

UENUM(BlueprintType, Category = "PollutionType")
enum PollutionType
{
	POLLUTION1 = 0,
	POLLUTION2,
	POLLUTION3
};

UENUM(BlueprintType, Category = "PlayerCreatureType")
enum PlayerCreatureType
{
	CRAB = 0,
	TURTLE,
	CLOWNFISH
};

UENUM(BlueprintType, Category = "ActorType")
enum ActorType
{
	ANIMAL = 0,
	OBJECT
};
/**
 * 
 */
class TESTPROJECT_API EnumsHandler
{
public:
	EnumsHandler();
	~EnumsHandler();
};
