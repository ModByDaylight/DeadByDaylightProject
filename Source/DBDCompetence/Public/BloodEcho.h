#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "BloodEcho.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBloodEcho : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _statusEffectDurationTag;
    
    UPROPERTY(EditDefaultsOnly)
    float _cooldownDuration[3];
    
public:
    UBloodEcho();
};

