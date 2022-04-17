#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DetectionFanComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UDetectionFanComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FFloatRange _angleRange;
    
    UPROPERTY(EditDefaultsOnly)
    FVector _originWorldOffset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _numberOfSpots;
    
    UPROPERTY(EditDefaultsOnly)
    float _defaultRingRadius;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> _collisionChannel;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* _meshComponent;
    
public:
    UDetectionFanComponent();
};

