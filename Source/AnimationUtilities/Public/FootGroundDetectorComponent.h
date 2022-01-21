#pragma once
#include "CoreMinimal.h"
#include "BaseGroundDetectorComponent.h"
#include "UObject/NoExportTypes.h"
#include "FootGroundDetectorComponent.generated.h"

class UCharacterMovementComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UFootGroundDetectorComponent : public UBaseGroundDetectorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName _hipTransformName;
    
    UPROPERTY(EditAnywhere)
    FVector _slopeStartOffset;
    
    UPROPERTY(EditAnywhere)
    float _footLength;
    
    UPROPERTY(EditAnywhere)
    float _traceRadius;
    
    UPROPERTY(EditAnywhere)
    float _maxWalkableSlopeAngle;
    
    UPROPERTY(Export)
    UCharacterMovementComponent* _movementComp;
    
public:
    UFootGroundDetectorComponent();
};

