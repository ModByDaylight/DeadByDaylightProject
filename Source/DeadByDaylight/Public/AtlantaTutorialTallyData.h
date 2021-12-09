#pragma once
#include "CoreMinimal.h"
#include "AtlantaTutorialTallyData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaTutorialTallyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool IsKiller;
    
    UPROPERTY(BlueprintReadWrite)
    bool FirstTimeCompleted;
    
    UPROPERTY(BlueprintReadWrite)
    int32 BloodpointsScore;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AuricCells;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FearTokens;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> Characters;
    
    DEADBYDAYLIGHT_API FAtlantaTutorialTallyData();
};

