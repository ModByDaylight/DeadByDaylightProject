#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "OffTheRecord.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UOffTheRecord : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _activationDurationLevels[3];
    
public:
    UOffTheRecord();
};

