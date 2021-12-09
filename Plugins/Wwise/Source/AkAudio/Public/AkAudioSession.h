#pragma once
#include "CoreMinimal.h"
#include "EAkAudioSessionCategory.h"
#include "EAkAudioSessionMode.h"
#include "AkAudioSession.generated.h"

USTRUCT(BlueprintType)
struct FAkAudioSession {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EAkAudioSessionCategory AudioSessionCategory;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 AudioSessionCategoryOptions;
    
    UPROPERTY(Config, EditAnywhere)
    EAkAudioSessionMode AudioSessionMode;
    
    AKAUDIO_API FAkAudioSession();
};

