#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Resurgence.generated.h"

UCLASS()
class UResurgence : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _healRegainPercentage[3];
    
public:
    UResurgence();
};

