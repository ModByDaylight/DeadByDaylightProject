#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "K26PathData.h"
#include "K26Path.h"
#include "K26PathHandlerComponent.generated.h"

class AActor;
class UK26CrowPlacementValidatorComponent;
class UK26AmmoHandlerComponent;

UCLASS(BlueprintType, EditInlineNew)
class UK26PathHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maxPathDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _survivorPathVisibilityTimeOnFire;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _defaultProjectileDistanceFromFloor;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maxPathIterations;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maxGroundSearchingDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> _visualPathPart;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> _visualPathEndArrow;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _projectileSummonDistance;
    
    UPROPERTY(Export, Transient)
    UK26AmmoHandlerComponent* _ammoHandler;
    
    UPROPERTY(Export, Transient)
    UK26CrowPlacementValidatorComponent* _placementValidator;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AvailablePathData)
    TArray<FK26PathData> _availablePathData;
    
    UPROPERTY(Transient)
    TArray<FK26Path> _availablePaths;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26CrowPlacementValidatorComponent* placementValidator);
    
private:
    UFUNCTION()
    void OnRep_AvailablePathData();
    
    UFUNCTION()
    void OnIterativeAvailablePathUpdate();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_FillAvailablePathArray(const int32 maxAmmo);
    
    UFUNCTION()
    void Authority_OnMaxAmmoSet(const int32 maxAmmo);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UK26PathHandlerComponent();
};

