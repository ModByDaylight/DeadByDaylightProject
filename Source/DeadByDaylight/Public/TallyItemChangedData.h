#pragma once
#include "CoreMinimal.h"
#include "InventorySlotData.h"
#include "EEnergyTypeEnum.h"
#include "TallyItemChangedData.generated.h"

USTRUCT(BlueprintType)
struct FTallyItemChangedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FInventorySlotData Item;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FInventorySlotData Addon1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FInventorySlotData Addon2;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsSet;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EEnergyTypeEnum EnergyType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float EnergyLevel;
    
    DEADBYDAYLIGHT_API FTallyItemChangedData();
};

