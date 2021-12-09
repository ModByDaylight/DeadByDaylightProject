#pragma once
#include "CoreMinimal.h"
#include "SubtitlesEntry.generated.h"

USTRUCT(BlueprintType)
struct FSubtitlesEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool isAOneLiner;
    
    DBDUIVIEWSCORE_API FSubtitlesEntry();
};

