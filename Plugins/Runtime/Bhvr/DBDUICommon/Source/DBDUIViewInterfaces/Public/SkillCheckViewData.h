#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SkillCheckViewData.generated.h"

USTRUCT(BlueprintType)
struct FSkillCheckViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HitAreaStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HitAreaLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BonusAreaStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BonusAreaLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHexed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSpectating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMirrored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsInsane;
    
    DBDUIVIEWINTERFACES_API FSkillCheckViewData();
};

