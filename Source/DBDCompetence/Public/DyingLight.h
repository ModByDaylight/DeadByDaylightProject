#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "DyingLight.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS()
class DBDCOMPETENCE_API UDyingLight : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<float> _actionSpeedPenaltyPerToken;
    
    UPROPERTY(EditAnywhere)
    float _obsessionActionSpeedBonus;
    
    UPROPERTY(EditAnywhere)
    FName _obsessionStatusEffectID;
    
    UPROPERTY(EditAnywhere)
    FName _nonObsessionStatusEffectID;
    
    UPROPERTY(Export, Transient)
    TArray<UStatusEffect*> _survivorDebuffs;
    
    UFUNCTION()
    void OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession);
    
public:
    UDyingLight();
};

