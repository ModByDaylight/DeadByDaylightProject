#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "InputPromptDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInputPromptDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FText InputLabel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FKey InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UTexture2D* PromptTexture;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool ShowLabel;
    
    DBDUIVIEWSCORE_API FInputPromptDataRow();
};

