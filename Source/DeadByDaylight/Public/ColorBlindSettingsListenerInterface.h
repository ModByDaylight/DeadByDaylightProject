#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Rendering/RenderingCommon.h"
#include "ColorBlindSettingsListenerInterface.generated.h"

UINTERFACE(Blueprintable)
class UColorBlindSettingsListenerInterface : public UInterface {
    GENERATED_BODY()
};

class IColorBlindSettingsListenerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnColorBlindSettingsChange(EColorVisionDeficiency colorBlindMode, int32 colorBlindIntensity);
    
};

