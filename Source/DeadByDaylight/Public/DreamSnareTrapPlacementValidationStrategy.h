#pragma once
#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "DreamSnareTrapPlacementValidationStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDreamSnareTrapPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float NumberOfGroundTest;
    
    UPROPERTY(EditDefaultsOnly)
    float TrapRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxElevationDifferentialOnTrapEdge;
    
public:
    UDreamSnareTrapPlacementValidationStrategy();
};

