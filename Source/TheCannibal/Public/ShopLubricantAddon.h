#pragma once
#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "ShopLubricantAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UShopLubricantAddon : public UOnEventBaseAddon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _auraBlockingDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float _auraVisibleDistance;
    
public:
    UShopLubricantAddon();
};

