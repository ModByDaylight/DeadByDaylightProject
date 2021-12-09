#pragma once
#include "CoreMinimal.h"
#include "EClaimableInboxMessageType.h"
#include "ClaimableInboxMessageData.generated.h"

USTRUCT(BlueprintType)
struct ONLINEMESSAGESUTILITIES_API FClaimableInboxMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EClaimableInboxMessageType Type;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Amount;
    
    UPROPERTY(BlueprintReadOnly)
    FString Id;
    
    FClaimableInboxMessageData();
};

