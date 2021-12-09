#pragma once
#include "CoreMinimal.h"
#include "CamperDamageResult.generated.h"

class AActor;
class UGameplayModifierContainer;

USTRUCT()
struct DEADBYDAYLIGHT_API FCamperDamageResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* DamageSource;
    
    UPROPERTY(Export)
    UGameplayModifierContainer* KOPreventedSource;
    
    FCamperDamageResult();
};

