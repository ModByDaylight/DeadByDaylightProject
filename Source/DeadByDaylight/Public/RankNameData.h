#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "RankNameData.generated.h"

USTRUCT(BlueprintType)
struct FRankNameData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText RankName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SubRanks;
    
    DEADBYDAYLIGHT_API FRankNameData();
};

