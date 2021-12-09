#pragma once
#include "CoreMinimal.h"
#include "ECamperDamageState.h"
#include "CamperHealResult.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FCamperHealResult {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ECamperDamageState PreviousDamageState;
    
    UPROPERTY(Transient)
    ECamperDamageState CurrentDamageState;
    
    UPROPERTY(Transient)
    int32 HealAmount;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> Healers;
    
    FCamperHealResult();
};

