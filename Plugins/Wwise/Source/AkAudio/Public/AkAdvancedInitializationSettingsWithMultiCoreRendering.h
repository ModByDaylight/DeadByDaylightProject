#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettings.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.generated.h"

USTRUCT(BlueprintType)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool EnableMultiCoreRendering;
    
    AKAUDIO_API FAkAdvancedInitializationSettingsWithMultiCoreRendering();
};

