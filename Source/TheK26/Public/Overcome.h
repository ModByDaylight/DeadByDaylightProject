#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Overcome.generated.h"

class UActivatableExhaustedEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UOvercome : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _exhaustionDuration[3];
    
private:
    UPROPERTY(EditDefaultsOnly)
    float _damageStateChangedTimeLimit;
    
    UPROPERTY(Export, Transient)
    UActivatableExhaustedEffect* _exhaustedEffect;
    
public:
    UOvercome();
};

