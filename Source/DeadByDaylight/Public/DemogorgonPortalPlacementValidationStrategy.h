#pragma once
#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "DemogorgonPortalPlacementValidationStrategy.generated.h"

class UPortalPlacerStateComponent;
class UChargedAttackStateComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDemogorgonPortalPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UPortalPlacerStateComponent* _portalPlacerState;
    
    UPROPERTY(Export, Transient)
    UChargedAttackStateComponent* _chargedAttackState;
    
    UPROPERTY(EditDefaultsOnly)
    float _distanceForWorldCollisionDetection;
    
    UPROPERTY(EditDefaultsOnly)
    float _numberOfGroundTest;
    
    UPROPERTY(EditDefaultsOnly)
    float _portalEdgeTestRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float _maxElevationDifferentialOnPortalEdge;
    
public:
    UDemogorgonPortalPlacementValidationStrategy();
};

