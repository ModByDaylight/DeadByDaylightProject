#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "DeviceProfiles.generated.h"

USTRUCT(BlueprintType)
struct FDeviceProfiles : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText GPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Quality;
    
    DEADBYDAYLIGHT_API FDeviceProfiles();
};

