#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "DyingLight.generated.h"

class UStatusEffect;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
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
    
public:
    UDyingLight();
private:
    UFUNCTION()
    void OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession);
    
};

