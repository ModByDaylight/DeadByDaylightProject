#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Cinematic.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FCinematic {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSoftObjectPtr<UMediaSource> Source;
    
    UPROPERTY(Transient)
    FVector2D SourceSize;
    
    UPROPERTY(Transient)
    bool SourceHasAudio;
    
    DEADBYDAYLIGHT_API FCinematic();
};

