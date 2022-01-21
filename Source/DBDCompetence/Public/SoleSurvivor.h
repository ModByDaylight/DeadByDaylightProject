#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SoleSurvivor.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class USoleSurvivor : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _auraHideDistancePerDeadOrDisconnectedSurvivor[3];
    
private:
    UPROPERTY(Transient)
    TArray<ACamperPlayer*> _otherSurvivors;
    
public:
    USoleSurvivor();
private:
    UFUNCTION()
    void Authority_OnSurvivorAdded(const ACamperPlayer* survivor);
    
};

