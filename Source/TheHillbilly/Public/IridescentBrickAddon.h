#pragma once
#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "IridescentBrickAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIridescentBrickAddon : public UOnEventBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UStatusEffect* _undetectableStatusEffect;
    
public:
    UIridescentBrickAddon();
};

