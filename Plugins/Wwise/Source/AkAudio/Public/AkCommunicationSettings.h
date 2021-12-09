#pragma once
#include "CoreMinimal.h"
#include "AkCommunicationSettings.generated.h"

USTRUCT()
struct FAkCommunicationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 PoolSize;
    
    UPROPERTY(EditAnywhere)
    uint16 DiscoveryBroadcastPort;
    
    UPROPERTY(EditAnywhere)
    uint16 CommandPort;
    
    UPROPERTY(EditAnywhere)
    uint16 NotificationPort;
    
    UPROPERTY(EditAnywhere)
    FString NetworkName;
    
    AKAUDIO_API FAkCommunicationSettings();
};

