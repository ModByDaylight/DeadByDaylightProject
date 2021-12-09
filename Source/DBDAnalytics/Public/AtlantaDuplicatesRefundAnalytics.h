#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaDuplicatesRefundAnalytics.generated.h"

USTRUCT()
struct FAtlantaDuplicatesRefundAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString DuplicatesItems;
    
    UPROPERTY()
    FString RefundItem;
    
    UPROPERTY()
    int32 RefundItemAmount;
    
    UPROPERTY()
    FString FragmentItem;
    
    UPROPERTY()
    int32 FragmentItemAmount;
    
    UPROPERTY()
    FString FromSystem;
    
    DBDANALYTICS_API FAtlantaDuplicatesRefundAnalytics();
};

