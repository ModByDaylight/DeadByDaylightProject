#pragma once
#include "CoreMinimal.h"
#include "BaseLoadoutPartViewData.h"
#include "InputCoreTypes.h"
#include "PowerViewData.generated.h"

USTRUCT(BlueprintType)
struct FPowerViewData : public FBaseLoadoutPartViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsRechargeable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ProgressValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowKeyPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCountDisplayForced;
    
    DBDUIVIEWINTERFACES_API FPowerViewData();
};

