#pragma once
#include "CoreMinimal.h"
#include "BaseCharacterVelocityAdditiveStrategy.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "SurvivorReelVelocityAdditiveStrategy.generated.h"

class ASlasherPlayer;

UCLASS()
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
    
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USurvivorReelVelocityAdditiveStrategy();
};

