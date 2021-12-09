#pragma once
#include "CoreMinimal.h"
#include "ClaimableInboxMessageData.h"
#include "EClaimableInboxMessageState.h"
#include "ClaimableInboxMessage.generated.h"

USTRUCT(BlueprintType)
struct ONLINEMESSAGESUTILITIES_API FClaimableInboxMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FClaimableInboxMessageData> Data;
    
    UPROPERTY(BlueprintReadOnly)
    EClaimableInboxMessageState State;
    
    FClaimableInboxMessage();
};

