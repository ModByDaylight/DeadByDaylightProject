#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Babysitter.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBabysitter : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _scratchMarkHidingTime[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _hasteEffect[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _showAuraTime[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _cooldownTime[3];
    
public:
    UBabysitter();
};

