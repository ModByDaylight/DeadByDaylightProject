#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "HelpContextMappingData.generated.h"

USTRUCT(BlueprintType)
struct FHelpContextMappingData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ContextName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> TopicIds;
    
    DBDSHAREDTYPES_API FHelpContextMappingData();
};

