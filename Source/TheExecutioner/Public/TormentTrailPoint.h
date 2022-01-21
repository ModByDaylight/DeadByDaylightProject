#pragma once
#include "CoreMinimal.h"
#include "BaseTormentTrailPoint.h"
#include "ETrailPointRefreshReason.h"
#include "UObject/NoExportTypes.h"
#include "TormentTrailPoint.generated.h"

class UAuthoritativePoolableActorComponent;
class USplineComponent;

UCLASS()
class ATormentTrailPoint : public ABaseTormentTrailPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UAuthoritativePoolableActorComponent* _poolableComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float _splineMeshOverlapDistance;
    
public:
    ATormentTrailPoint();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RemoveTrailPoint();
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void RefreshTrailPointCosmetic(ETrailPointRefreshReason trailPointRefreshReason);
    
private:
    UFUNCTION()
    void OnAcquireChanged(const bool acquired);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TriggerTrailPointDisappear();
    
    UFUNCTION(BlueprintPure)
    void GetTrailLocationAndTangeant(const int32 indexInTrail, const USplineComponent* splineComponent, FVector& outStartLocation, FVector& outStartTangent, FVector& outEndLocation, FVector& outEndTangent) const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void AddTrailCosmetic(const USplineComponent* splineComponent, const uint8 indexInTrail);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ActivateCosmetic(const bool value);
    
};

