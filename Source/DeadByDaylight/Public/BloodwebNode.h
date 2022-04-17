#pragma once
#include "CoreMinimal.h"
#include "BloodwebNodeProperties.h"
#include "BloodwebNodeGate.h"
#include "BloodwebChest.h"
#include "EBloodwebNodeState.h"
#include "BloodwebNode.generated.h"

USTRUCT()
struct DEADBYDAYLIGHT_API FBloodwebNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBloodwebNodeProperties Properties;
    
    UPROPERTY()
    TArray<FBloodwebNodeGate> Gates;
    
    UPROPERTY()
    EBloodwebNodeState State;
    
    UPROPERTY()
    FString NodeID;
    
    UPROPERTY()
    FName ContentId;
    
    UPROPERTY()
    FBloodwebChest BloodwebChest;
    
    FBloodwebNode();
};

