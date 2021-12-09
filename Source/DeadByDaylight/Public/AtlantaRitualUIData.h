#pragma once
#include "CoreMinimal.h"
#include "EAltantaRitualUIType.h"
#include "AtlantaRitualRewardUIData.h"
#include "AtlantaSubRitualUIData.h"
#include "AtlantaRitualUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 ID;
    
    UPROPERTY(BlueprintReadOnly)
    EAltantaRitualUIType Type;
    
    UPROPERTY(BlueprintReadOnly)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly)
    FString IconFilePath;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsNew;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsClaimed;
    
    UPROPERTY(BlueprintReadOnly)
    float ProgressPercentage;
    
    UPROPERTY(BlueprintReadOnly)
    int32 RefreshPrice;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FAtlantaRitualRewardUIData> Rewards;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FAtlantaSubRitualUIData> SubRituals;
    
    DEADBYDAYLIGHT_API FAtlantaRitualUIData();
};

