#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkHololensAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 AudioAPI;
    
    UPROPERTY(EditAnywhere)
    bool GlobalFocus;
    
    UPROPERTY(EditAnywhere)
    bool UseHeadMountedDisplayAudioDevice;
    
    AKAUDIO_API FAkHololensAdvancedInitializationSettings();
};

