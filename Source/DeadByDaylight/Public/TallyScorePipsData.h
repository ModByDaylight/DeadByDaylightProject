#pragma once
#include "CoreMinimal.h"
#include "EmblemSlotData.h"
#include "TallyScorePipsData.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FTallyScorePipsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float Threshold;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<float> PipThresholds;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FEmblemSlotData> Scores;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 PipsDelta;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsSlasher;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsVersusBotMatch;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsCustomMatch;
    
    FTallyScorePipsData();
};

