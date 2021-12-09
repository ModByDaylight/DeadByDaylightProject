#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Deception.generated.h"

class UStatusEffect;
class UManualIconStrategy;

UCLASS()
class UDeception : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _noScratchMarksDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _perkCooldownDuration[3];
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _statusEffect;
    
    UPROPERTY(Transient)
    UManualIconStrategy* _iconStrategy;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnOwningPlayerFakedEnteringLockerCosmetic();
    
public:
    UDeception();
};

