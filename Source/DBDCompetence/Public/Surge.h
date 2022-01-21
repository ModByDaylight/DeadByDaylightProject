#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Surge.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USurge : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _zoneRadius[3];
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _instantRegression[3];
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _cooldownDuration[3];
    
    UPROPERTY(EditAnywhere)
    bool _hasCooldown;
    
    UPROPERTY(EditAnywhere)
    bool _useTerrorRadiusInsteadOfFixedDistance;
    
public:
    USurge();
private:
    UFUNCTION(Client, Unreliable)
    void Client_TriggerEffects(const TArray<AGenerator*>& generators);
    
};

