#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DeceptionEffect.generated.h"

UCLASS()
class UDeceptionEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool _hideBloodTrailsWhenCamperFakeEnterLocker;
    
public:
    UDeceptionEffect();
};

