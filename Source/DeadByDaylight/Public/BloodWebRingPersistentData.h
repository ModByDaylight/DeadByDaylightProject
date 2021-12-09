#pragma once
#include "CoreMinimal.h"
#include "BloodwebNode.h"
#include "BloodWebRingPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FBloodWebRingPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBloodwebNode> NodeData;
    
    DEADBYDAYLIGHT_API FBloodWebRingPersistentData();
};

