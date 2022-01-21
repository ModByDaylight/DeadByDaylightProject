#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Visionary.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UVisionary : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _auraVisibilityRange[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _cooldownDuration[3];
    
public:
    UVisionary();
};

