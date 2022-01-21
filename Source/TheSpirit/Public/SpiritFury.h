#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SpiritFury.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USpiritFury : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 _palletToBreakCountPerLevel[3];
    
public:
    USpiritFury();
};

