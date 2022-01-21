#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "DesperateMeasures.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDesperateMeasures : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _healAndUnhookMultiplier[3];
    
    UPROPERTY(Replicated, Transient)
    int32 _nbInjuredHookedOrDyingSurvivors;
    
public:
    UDesperateMeasures();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

