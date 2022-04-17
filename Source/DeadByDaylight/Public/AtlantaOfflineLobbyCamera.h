#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraActor.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaOfflineLobbyCamera.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AAtlantaOfflineLobbyCamera : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZCameraPositionOffsetMultiplier;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float _kDefaultAspectRatio;
    
public:
    AAtlantaOfflineLobbyCamera();
    UFUNCTION(BlueprintImplementableEvent)
    void SetCameraRotation(FRotator rotationVector);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCameraPosition(FVector positionVector);
    
};

