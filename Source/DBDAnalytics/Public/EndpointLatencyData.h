#pragma once
#include "CoreMinimal.h"
#include "EndpointLatencyData.generated.h"

USTRUCT(BlueprintType)
struct FEndpointLatencyData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Id;
    
    UPROPERTY()
    uint32 Latency;
    
    DBDANALYTICS_API FEndpointLatencyData();
};

