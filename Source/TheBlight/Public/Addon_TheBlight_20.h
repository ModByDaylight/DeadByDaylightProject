#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_TheBlight_20.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_20 : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UStatusEffect* _forceKoStatusEffect;
    
public:
    UAddon_TheBlight_20();
};

