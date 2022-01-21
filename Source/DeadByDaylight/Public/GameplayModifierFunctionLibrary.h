#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayModifierFunctionLibrary.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType)
class UGameplayModifierFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplayModifierFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void Authority_SetPlayerGameplayModifier(ADBDPlayer* targetPlayer, FGameplayTag modifierType, float modifierValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void Authority_SetPlayerGameplayFlag(ADBDPlayer* targetPlayer, FGameplayTag flagType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void Authority_ClearPlayerGameplayModifier(ADBDPlayer* targetPlayer, FGameplayTag modifierType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void Authority_ClearPlayerGameplayFlag(ADBDPlayer* targetPlayer, FGameplayTag flagType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void Authority_ClearAllPlayerGameplayModifiers(ADBDPlayer* targetPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void Authority_ClearAllPlayerGameplayFlags(ADBDPlayer* targetPlayer);
    
};

