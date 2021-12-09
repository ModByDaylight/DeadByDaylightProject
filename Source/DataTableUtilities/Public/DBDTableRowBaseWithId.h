#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "DBDTableRowBaseWithId.generated.h"

USTRUCT()
struct DATATABLEUTILITIES_API FDBDTableRowBaseWithId : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Id;
    
    FDBDTableRowBaseWithId();
};

