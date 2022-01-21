#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ECurrencyType.h"
#include "Styling/SlateColor.h"
#include "CurrencyUIData.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyUIData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString IconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor CurrencyColorTheme;
    
    DEADBYDAYLIGHT_API FCurrencyUIData();
};

