#pragma once
#include "CoreMinimal.h"
#include "AkSoundLoop.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct DBDAUDIO_API FAkSoundLoop {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* _startEvent;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* _endEvent;
    
public:
    FAkSoundLoop();
};

