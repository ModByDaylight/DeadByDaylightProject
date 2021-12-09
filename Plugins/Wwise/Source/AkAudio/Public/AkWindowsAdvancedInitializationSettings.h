#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkWindowsAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 AudioAPI;
    
    UPROPERTY(EditAnywhere)
    bool GlobalFocus;
    
    UPROPERTY(EditAnywhere)
    bool UseHeadMountedDisplayAudioDevice;
    
    AKAUDIO_API FAkWindowsAdvancedInitializationSettings();
};

