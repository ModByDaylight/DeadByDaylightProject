#pragma once
#include "CoreMinimal.h"
#include "AkAudioEventTrackKey.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAkAudioEventTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString EventName;
    
    AKAUDIO_API FAkAudioEventTrackKey();
};

