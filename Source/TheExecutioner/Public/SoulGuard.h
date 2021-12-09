#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "CamperHealResult.h"
#include "SoulGuard.generated.h"

UCLASS()
class USoulGuard : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _cooldownLevels[3];
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool _recover;
    
    UPROPERTY(EditDefaultsOnly)
    float _enduranceEffectDuration[3];
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Authority_ShowOnKOPreventedFX();
    
private:
    UFUNCTION()
    void Authority_OnSurvivorHealed(const FCamperHealResult& healResult);
    
public:
    USoulGuard();
};

