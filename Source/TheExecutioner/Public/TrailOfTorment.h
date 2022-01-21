#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "TrailOfTorment.generated.h"

class AGenerator;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTrailOfTorment : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _cooldownDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    int32 _highlightPriority;
    
    UPROPERTY(Replicated, Transient)
    bool _isPerkActivated;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HighlightGenerator)
    AGenerator* _highlightedGenerator;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _statusEffect;
    
public:
    UTrailOfTorment();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_HighlightGenerator(AGenerator* _oldHighlightedGenerator);
    
};

