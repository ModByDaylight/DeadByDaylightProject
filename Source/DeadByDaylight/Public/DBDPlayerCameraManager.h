#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "DBDPlayerCameraManager.generated.h"

class UViewRotationStrategy;
class IViewRotationStrategy;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NormalFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetingFOV;
    
private:
    UPROPERTY(Transient)
    TScriptInterface<IViewRotationStrategy> _viewRotationStrategy;
    
public:
    ADBDPlayerCameraManager();
};

