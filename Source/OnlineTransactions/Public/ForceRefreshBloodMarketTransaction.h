#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineTransaction.h"
#include "ForceRefreshBloodMarketTransaction.generated.h"

UCLASS()
class ONLINETRANSACTIONS_API UForceRefreshBloodMarketTransaction : public UObject, public IOnlineTransaction {
    GENERATED_BODY()
public:
    UForceRefreshBloodMarketTransaction();
    
    // Fix for true pure virtual functions not being implemented
};

