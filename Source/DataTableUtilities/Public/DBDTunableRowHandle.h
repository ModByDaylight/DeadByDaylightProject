#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DBDTunableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct DATATABLEUTILITIES_API FDBDTunableRowHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle _dataTableRowHandle;
    
    UPROPERTY(EditAnywhere)
    float _defaultValue;
    
public:
    FDBDTunableRowHandle();
};

