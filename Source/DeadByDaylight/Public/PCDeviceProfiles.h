#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ResolutionQualityPair.h"
#include "PCDeviceProfiles.generated.h"

USTRUCT(BlueprintType)
struct FPCDeviceProfiles : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName GPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FResolutionQualityPair> Pairs;
    
    DEADBYDAYLIGHT_API FPCDeviceProfiles();
};

