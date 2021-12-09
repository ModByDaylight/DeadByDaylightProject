#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DBDTableRowBase.generated.h"

USTRUCT()
struct FDBDTableRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    DATATABLEUTILITIES_API FDBDTableRowBase();
};

