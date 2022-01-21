#pragma once
#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_K22Power_19.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_19 : public UOnEventBaseAddon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _undetectableDuration;
    
public:
    UAddon_K22Power_19();
};

