#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "SubtitlesDescription.generated.h"

class UAkAudioEvent;

USTRUCT()
struct FSubtitlesDescription : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText SubtitlesText;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> AudioEvent;
    
    DEADBYDAYLIGHT_API FSubtitlesDescription();
};

