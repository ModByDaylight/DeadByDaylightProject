#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_TheBlight_13.generated.h"

UCLASS()
class UAddon_TheBlight_13 : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _speedIncreasePerDash;
    
public:
    UAddon_TheBlight_13();
};

