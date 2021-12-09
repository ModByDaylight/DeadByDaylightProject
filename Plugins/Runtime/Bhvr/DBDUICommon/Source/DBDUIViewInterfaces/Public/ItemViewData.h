#pragma once
#include "CoreMinimal.h"
#include "BaseLoadoutPartViewData.h"
#include "InputCoreTypes.h"
#include "ItemViewData.generated.h"

USTRUCT(BlueprintType)
struct FItemViewData : public FBaseLoadoutPartViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnergyTypeValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnergyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowKeyPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsLimitedItem;
    
    DBDUIVIEWINTERFACES_API FItemViewData();
};

