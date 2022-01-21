#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "DBDMarketingCameraController.generated.h"

UCLASS()
class ADBDMarketingCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    ADBDMarketingCameraController();
    UFUNCTION(Exec)
    void DBD_SetMarketingCameraTriggerSensitivity(const float triggerSensitivity);
    
    UFUNCTION(Exec)
    void DBD_SetMarketingCameraDampeningFactor(float accelerationFactor, float decelerationFactor);
    
    UFUNCTION(Exec)
    void DBD_SetMarketingCameraControllerSensitivityModifier(const float modifierValue, const bool isEditingRight);
    
    UFUNCTION(Exec)
    void DBD_MarketingCameraToggleDampening();
    
};

