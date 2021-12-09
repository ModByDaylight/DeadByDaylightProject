#pragma once
#include "CoreMinimal.h"
#include "DataTableDropdown.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FDataTableDropdown {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName RowValue;
    
    UPROPERTY(EditAnywhere)
    FString DataTableName;
    
    UPROPERTY(EditAnywhere)
    FName ColumnName;
    
public:
    FDataTableDropdown();
};

