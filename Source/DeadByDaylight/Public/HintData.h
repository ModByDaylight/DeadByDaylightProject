#pragma once
#include "CoreMinimal.h"
#include "EHintCategory.h"
#include "DBDTableRowBase.h"
#include "HintData.generated.h"

USTRUCT(BlueprintType)
struct FHintData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHintCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString IconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 levelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 levelMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 relevantCharacterID;
    
    DEADBYDAYLIGHT_API FHintData();
};

