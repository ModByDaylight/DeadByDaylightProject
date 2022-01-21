#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "TormentTrailDetectorComponent.generated.h"

class ATormentTrailPoint;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEEXECUTIONER_API UTormentTrailDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ATormentTrailPoint*> _overlappedTrailPoints;
    
    UPROPERTY(Replicated)
    FTagStateBool _isInTormentTrail;
    
    UPROPERTY(Replicated)
    FTagStateBool _isInTormentTrailEffect;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _inTormentTrailLastingEffectTime;
    
public:
    UTormentTrailDetectorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

