#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "WallGrabInteractionDefinition.generated.h"

class UBlightPowerStateComponent;
class ABlightPowerEstimatedCollisionIndicator;

UCLASS(EditInlineNew)
class UWallGrabInteractionDefinition : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UBlightPowerStateComponent* _blightPowerStateComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _wallDashAccelerationMultiplier;
    
    UPROPERTY(Transient)
    ABlightPowerEstimatedCollisionIndicator* _blightPowerCollisionIndicator;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ABlightPowerEstimatedCollisionIndicator> _collisionIndicatorActorClass;
    
public:
    UWallGrabInteractionDefinition();
};

