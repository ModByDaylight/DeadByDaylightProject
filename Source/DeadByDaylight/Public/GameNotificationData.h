#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EPromptPriority.h"
#include "EPromptType.h"
#include "GameNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FGameNotificationData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPromptType PromptType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPromptPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Content;
    
    DEADBYDAYLIGHT_API FGameNotificationData();
};

