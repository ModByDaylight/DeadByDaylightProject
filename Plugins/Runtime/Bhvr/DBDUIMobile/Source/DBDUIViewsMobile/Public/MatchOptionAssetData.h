#pragma once
#include "CoreMinimal.h"
#include "MatchOptionAssetData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FMatchOptionAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText TextName;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPaperSprite> Icon;
    
    DBDUIVIEWSMOBILE_API FMatchOptionAssetData();
};

