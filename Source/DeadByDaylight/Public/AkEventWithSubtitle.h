#pragma once
#include "CoreMinimal.h"
#include "AkEventWithSubtitle.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAkEventWithSubtitle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasSubtitles;
    
    DEADBYDAYLIGHT_API FAkEventWithSubtitle();
};

