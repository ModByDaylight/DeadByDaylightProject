#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "SpecialEventLoadingTextData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventLoadingTextData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString IconPath;
    
    DEADBYDAYLIGHT_API FSpecialEventLoadingTextData();
};

