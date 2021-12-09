#pragma once
#include "CoreMinimal.h"
#include "BaseCameraTargetingStrategy.h"
#include "GunslingerCameraTargetingStrategy.generated.h"

UCLASS()
class THEGUNSLINGER_API UGunslingerCameraTargetingStrategy : public UBaseCameraTargetingStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName _cameraSocketName;
    
    UPROPERTY(EditAnywhere)
    FName _survivorHarpoonSocketName;
    
public:
    UGunslingerCameraTargetingStrategy();
};

