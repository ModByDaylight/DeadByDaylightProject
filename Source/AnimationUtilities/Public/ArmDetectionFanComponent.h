#pragma once
#include "CoreMinimal.h"
#include "DetectionFanComponent.h"
#include "ArmDetectionFanComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UArmDetectionFanComponent : public UDetectionFanComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName _shoulderBone;
    
    UPROPERTY(EditDefaultsOnly)
    FName _elbowBone;
    
    UPROPERTY(EditDefaultsOnly)
    FName _handBone;
    
    UPROPERTY(EditDefaultsOnly)
    FName _indexBone;
    
    UPROPERTY(EditDefaultsOnly)
    FName _hipBone;
    
    UArmDetectionFanComponent();
};

