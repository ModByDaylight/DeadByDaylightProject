#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "HelpTopicData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHelpTopicData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString IconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString VideoID;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    DBDSHAREDTYPES_API FHelpTopicData();
};

