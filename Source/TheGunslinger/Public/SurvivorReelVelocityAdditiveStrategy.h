#pragma once
#include "CoreMinimal.h"
#include "BaseCharacterVelocityAdditiveStrategy.h"
#include "TagStateBool.h"
#include "TunableStat.h"
#include "SurvivorReelVelocityAdditiveStrategy.generated.h"

class ASlasherPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API USurvivorReelVelocityAdditiveStrategy : public UBaseCharacterVelocityAdditiveStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FTunableStat _reelSpeed;
    
    UPROPERTY(EditAnywhere)
    float _minimumLinkLengthDelta;
    
    UPROPERTY(EditAnywhere)
    float _maximumVelocityAdditive;
    
    UPROPERTY(Replicated)
    FTagStateBool _isBeingReeled;
    
    UPROPERTY(Replicated)
    FTagStateBool _isBeingPulled;
    
public:
    USurvivorReelVelocityAdditiveStrategy();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
};

