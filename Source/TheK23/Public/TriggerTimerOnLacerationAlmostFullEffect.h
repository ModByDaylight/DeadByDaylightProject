#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "TriggerTimerOnLacerationAlmostFullEffect.generated.h"

class ULacerationComponent;

UCLASS()
class UTriggerTimerOnLacerationAlmostFullEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    ULacerationComponent* _lacerationComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float _duration;
    
public:
    UTriggerTimerOnLacerationAlmostFullEffect();
};

