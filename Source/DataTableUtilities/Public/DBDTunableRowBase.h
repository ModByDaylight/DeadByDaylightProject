#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "DBDTunableRowBase.generated.h"

USTRUCT()
struct DATATABLEUTILITIES_API FDBDTunableRowBase : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    FDBDTunableRowBase();
};

