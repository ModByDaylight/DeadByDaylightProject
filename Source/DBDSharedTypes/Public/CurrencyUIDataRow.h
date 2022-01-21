#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ECurrencyType.h"
#include "CurrencyProgressionUIData.h"
#include "CurrencyUIDataRow.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyUIDataRow : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCurrencyProgressionUIData CurrencyProgressionUIData;
    
    DBDSHAREDTYPES_API FCurrencyUIDataRow();
};

