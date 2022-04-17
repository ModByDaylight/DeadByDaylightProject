#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EPlayerRole.h"
#include "Styling/SlateColor.h"
#include "RankUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FRankUIData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerRole PlayerRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Frame;
    
    DEADBYDAYLIGHT_API FRankUIData();
};

