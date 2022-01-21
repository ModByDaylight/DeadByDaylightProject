#pragma once
#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_TheBlight_14.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_14 : public UOnEventBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _palletPulldownBlockRange;
    
    UPROPERTY(EditDefaultsOnly)
    float _palletPulldownBlockSeconds;
    
public:
    UAddon_TheBlight_14();
};

