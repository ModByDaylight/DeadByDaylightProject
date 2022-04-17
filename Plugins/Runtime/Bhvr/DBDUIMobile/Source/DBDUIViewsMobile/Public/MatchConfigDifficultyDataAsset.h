#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECustomMatchDifficulty.h"
#include "MatchConfigDifficultyData.h"
#include "MatchConfigDifficultyDataAsset.generated.h"

UCLASS()
class UMatchConfigDifficultyDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<ECustomMatchDifficulty, FMatchConfigDifficultyData> DifficultiesData;
    
    UMatchConfigDifficultyDataAsset();
};

