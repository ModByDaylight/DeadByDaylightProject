#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ELoadoutItemType.h"
#include "ItemUIData.h"
#include "ItemTypeData.generated.h"

USTRUCT()
struct FItemTypeData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ELoadoutItemType ItemType;
    
    UPROPERTY(EditAnywhere)
    FItemUIData UIData;
    
    DEADBYDAYLIGHT_API FItemTypeData();
};

