#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkAndroidAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 AudioAPI;
    
    UPROPERTY(EditAnywhere)
    bool RoundFrameSizeToHardwareSize;
    
    AKAUDIO_API FAkAndroidAdvancedInitializationSettings();
};

