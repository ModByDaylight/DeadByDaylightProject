#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EDBDScoreCategory.h"
#include "ScoreCategoryData.generated.h"

USTRUCT()
struct FScoreCategoryData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDBDScoreCategory Category;
    
    UPROPERTY(EditAnywhere)
    int32 ScoreCap;
    
    UPROPERTY(EditAnywhere)
    int32 ProgressionCap;
    
    UPROPERTY(EditAnywhere)
    int32 AchievementCap;
    
    DEADBYDAYLIGHT_API FScoreCategoryData();
};

