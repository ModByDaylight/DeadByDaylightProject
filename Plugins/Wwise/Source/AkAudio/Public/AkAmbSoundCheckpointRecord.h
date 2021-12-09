#pragma once
#include "CoreMinimal.h"
#include "AkAmbSoundCheckpointRecord.generated.h"

USTRUCT()
struct FAkAmbSoundCheckpointRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCurrentlyPlaying;
    
    AKAUDIO_API FAkAmbSoundCheckpointRecord();
};

