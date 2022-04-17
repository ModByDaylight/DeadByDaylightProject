#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "ECamperDamageState.h"
#include "K25SurvivorChainTargetterComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK25SurvivorChainTargetterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _timeBetweenQueuedChainsLaunch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _minimumSpawnDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _maximumSpawnDistance;
    
    UPROPERTY(EditAnywhere)
    float _sphereCastRadius;
    
    UPROPERTY(EditAnywhere)
    int32 _numberOfPositionFindingTries;
    
    UPROPERTY(EditAnywhere)
    int32 _maxNumberOfChainRetries;
    
public:
    UK25SurvivorChainTargetterComponent();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DebugPositionFind(const FVector& startSweepPosition, const FVector& endSweepPosition, bool hasFoundPosition, const FVector& foundPosition, bool hasFoundCollision, const FVector& collisionPosition) const;
    
    UFUNCTION()
    void Authority_OnSurvivorHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);
    
};

