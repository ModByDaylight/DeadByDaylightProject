#pragma once
#include "CoreMinimal.h"
#include "ERefundSource.h"
#include "RefundKeyUIData.generated.h"

USTRUCT()
struct FRefundKeyUIData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Id;
    
    UPROPERTY()
    FString IconFilePath;
    
    UPROPERTY()
    FText DisplayName;
    
    UPROPERTY()
    FText Description;
    
    UPROPERTY()
    ERefundSource Source;
    
    DEADBYDAYLIGHT_API FRefundKeyUIData();
};

