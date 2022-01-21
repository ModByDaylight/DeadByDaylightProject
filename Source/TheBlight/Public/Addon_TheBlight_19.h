#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_TheBlight_19.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_19 : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _survivorInRangeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float _survivorRevealTime;
    
public:
    UAddon_TheBlight_19();
};

