#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "TutorialNotificationData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTutorialNotificationData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString IconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsShowAnalyticEnabled;
    
    DEADBYDAYLIGHT_API FTutorialNotificationData();
};

