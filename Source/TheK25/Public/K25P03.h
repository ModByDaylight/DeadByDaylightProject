#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K25P03.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25P03 : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    int32 _numberOfSurvivorsWaitingForDamageStateChange;
    
    UPROPERTY(EditDefaultsOnly)
    float _state2ActionSpeedDebuffPercentage[3];
    
public:
    UK25P03();
private:
    UFUNCTION()
    void OnSurvivorRemoved(ACamperPlayer* survivor);
    
    UFUNCTION()
    void OnDamageStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnCamperUnhookedFromScourgeHook(const FGameEventData& gameEventData);
    
};

