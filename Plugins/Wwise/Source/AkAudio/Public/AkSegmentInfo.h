#pragma once
#include "CoreMinimal.h"
#include "AkSegmentInfo.generated.h"

USTRUCT(BlueprintType)
struct FAkSegmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CurrentPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PreEntryDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ActiveDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PostExitDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RemainingLookAheadTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BeatDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BarDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GridDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GridOffset;
    
    AKAUDIO_API FAkSegmentInfo();
};

