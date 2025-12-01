// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "NexusAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class NEXUS_API UNexusAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

protected:
	TArray<FGameplayAbilitySpec> LastActivatableAbilities;
	
protected:
	void OnRep_ActivateAbilities() override;
};
