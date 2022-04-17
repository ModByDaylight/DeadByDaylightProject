#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SkillCheckViewData.generated.h"

USTRUCT(BlueprintType)
struct FSkillCheckViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FKey InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FKey InputKey2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float HitAreaStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float HitAreaLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float BonusAreaStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float BonusAreaLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsHexed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsSpectating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsMirrored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsInsane;
    
    DBDUIVIEWINTERFACES_API FSkillCheckViewData();
};

