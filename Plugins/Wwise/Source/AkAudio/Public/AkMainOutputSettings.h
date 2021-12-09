#pragma once
#include "CoreMinimal.h"
#include "EAkPanningRule.h"
#include "EAkChannelConfigType.h"
#include "AkMainOutputSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkMainOutputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString AudioDeviceShareset;
    
    UPROPERTY(EditAnywhere)
    uint32 DeviceID;
    
    UPROPERTY(EditAnywhere)
    EAkPanningRule PanningRule;
    
    UPROPERTY(EditAnywhere)
    EAkChannelConfigType ChannelConfigType;
    
    UPROPERTY(EditAnywhere)
    uint32 ChannelMask;
    
    UPROPERTY(EditAnywhere)
    uint32 NumberOfChannels;
    
    AKAUDIO_API FAkMainOutputSettings();
};

