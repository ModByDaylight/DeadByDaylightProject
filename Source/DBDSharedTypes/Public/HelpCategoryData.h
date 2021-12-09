#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EHelpType.h"
#include "HelpCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FHelpCategoryData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHelpType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> TopicIds;
    
    DBDSHAREDTYPES_API FHelpCategoryData();
};

