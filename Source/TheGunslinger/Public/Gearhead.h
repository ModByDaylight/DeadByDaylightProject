#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "ESkillCheckType.h"
#include "Gearhead.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UGearhead : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _perkActivationDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    ESkillCheckType _skillCheckType;
    
    UPROPERTY(EditDefaultsOnly)
    bool _basicAttack;
    
public:
    UGearhead();
};

