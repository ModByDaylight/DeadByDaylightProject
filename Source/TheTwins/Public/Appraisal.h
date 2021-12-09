#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Appraisal.generated.h"

UCLASS()
class UAppraisal : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _chestSearchSpeedMultiplier[3];
    
public:
    UAppraisal();
};

