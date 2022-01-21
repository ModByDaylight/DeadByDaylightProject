#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "StateTagUtilities.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UStateTagUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStateTagUtilities();
    UFUNCTION(BlueprintCallable)
    static void RemoveStateTagToPlayer(const ADBDPlayer* player, FGameplayTag tag);
    
    UFUNCTION(BlueprintCallable)
    static bool HasStateTag(const ADBDPlayer* player, FGameplayTag tag);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAnyStateTag(const ADBDPlayer* player, const FGameplayTagContainer& tag);
    
    UFUNCTION(BlueprintPure)
    static bool CurrentInteractionHasStateTag(const ADBDPlayer* player, FGameplayTag tag);
    
    UFUNCTION(BlueprintPure)
    static bool CurrentInteractionHasAnyStateTag(const ADBDPlayer* player, const FGameplayTagContainer& tags);
    
    UFUNCTION(BlueprintCallable)
    static void AddStateTagToPlayer(const ADBDPlayer* player, FGameplayTag tag);
    
};

