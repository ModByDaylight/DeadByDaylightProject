#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaTutorialEndReward.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaTutorialEndReward : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BloodpointReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AuricCellsRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FearTokensReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> CharactersRewards;
    
    DEADBYDAYLIGHT_API FAtlantaTutorialEndReward();
};

