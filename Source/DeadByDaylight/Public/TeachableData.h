#pragma once
#include "CoreMinimal.h"
#include "ETeachableStatus.h"
#include "InventorySlotData.h"
#include "TeachableData.generated.h"

USTRUCT(BlueprintType)
struct FTeachableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FInventorySlotData InventorySlotData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETeachableStatus Status;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 UnlockLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Message;
    
    DEADBYDAYLIGHT_API FTeachableData();
};

