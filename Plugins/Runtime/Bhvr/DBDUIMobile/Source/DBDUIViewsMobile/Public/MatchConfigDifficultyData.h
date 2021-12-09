#pragma once
#include "CoreMinimal.h"
#include "MatchConfigDifficultyData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FMatchConfigDifficultyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPaperSprite> DifficultyIcon;
    
    DBDUIVIEWSMOBILE_API FMatchConfigDifficultyData();
};

