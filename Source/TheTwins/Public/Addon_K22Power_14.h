#pragma once
#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_K22Power_14.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_14 : public UOnEventBaseAddon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _brokenDuration;
    
public:
    UAddon_K22Power_14();
};

