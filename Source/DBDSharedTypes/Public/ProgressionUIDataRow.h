#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EProgressionType.h"
#include "CurrencyProgressionUIData.h"
#include "ProgressionUIDataRow.generated.h"

USTRUCT(BlueprintType)
struct FProgressionUIDataRow : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EProgressionType ProgressionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCurrencyProgressionUIData CurrencyProgressionUIData;
    
    DBDSHAREDTYPES_API FProgressionUIDataRow();
};

