#pragma once
#include "CoreMinimal.h"
#include "EEmblemQuality.h"
#include "EmblemProgressionData.h"
#include "EmblemSlotData.generated.h"

USTRUCT(BlueprintType)
struct FEmblemSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    EEmblemQuality Quality;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Score;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FString> IconPaths;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<int32> ThresholdPoints;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentPoints;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FEmblemProgressionData> ProgressionData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CharacterExperience;
    
    DEADBYDAYLIGHT_API FEmblemSlotData();
};

