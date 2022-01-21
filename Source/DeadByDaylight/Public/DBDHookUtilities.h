#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "DBDHookUtilities.generated.h"

class AMeatHook;
class ACamperPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDHookUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDHookUtilities();
    UFUNCTION(BlueprintPure)
    static bool IsWraithHook(AMeatHook* targetHook);
    
    UFUNCTION(BlueprintPure)
    static bool IsPigHook(AMeatHook* targetHook);
    
    UFUNCTION(BlueprintPure)
    static bool IsNurseHook(AMeatHook* targetHook);
    
    UFUNCTION(BlueprintPure)
    static bool IsLegionHook(AMeatHook* targetHook);
    
    UFUNCTION(BlueprintPure)
    static bool IsHuntressHook(AMeatHook* targetHook);
    
    UFUNCTION(BlueprintPure)
    static bool IsHookOf(AMeatHook* targetHook, FGameplayTag hookTag);
    
    UFUNCTION(BlueprintPure)
    static bool IsHagHook(AMeatHook* targetHook);
    
    UFUNCTION(BlueprintPure)
    static bool IsFreddyHook(AMeatHook* targetHook);
    
    UFUNCTION(BlueprintPure)
    static float ComputeHookStrugglePercent(const ACamperPlayer* hookedCamper, float hookStruggleThreshold);
    
};

