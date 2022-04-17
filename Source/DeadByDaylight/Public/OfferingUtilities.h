#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOfferingEffectType.h"
#include "OfferingUtilities.generated.h"

class ADBDPlayer;
class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UOfferingUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOfferingUtilities();
    UFUNCTION(BlueprintPure)
    static bool IsPlayerEquippedWithOfferingWithTag(const ADBDPlayer* player, const FName offeringTag);
    
    UFUNCTION(BlueprintPure)
    static bool HasOfferingOfType(const UObject* worldContextObject, EOfferingEffectType offeringEffectType, int32 playerId);
    
    UFUNCTION(BlueprintCallable)
    static bool HasItemLossProtection(const ADBDPlayer* player);
    
};

