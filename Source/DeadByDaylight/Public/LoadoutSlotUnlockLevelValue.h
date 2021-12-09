#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ELoadoutSlot.h"
#include "LoadoutSlotUnlockLevelValue.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutSlotUnlockLevelValue : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELoadoutSlot LoadoutSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BloodwebLevel;
    
    DEADBYDAYLIGHT_API FLoadoutSlotUnlockLevelValue();
};

