#pragma once
#include "CoreMinimal.h"
#include "K25ChainAnchorAnimationData.generated.h"

class AK25Chain;

USTRUCT(BlueprintType)
struct FK25ChainAnchorAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float ChainPullAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float ChainWeight;
    
    UPROPERTY(BlueprintReadOnly)
    float ChainHeight;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasChainAttached;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsChainBeingRemoved;
    
    UPROPERTY()
    TWeakObjectPtr<AK25Chain> AttachedChain;
    
    THEK25_API FK25ChainAnchorAnimationData();
};

