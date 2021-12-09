#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemType.h"
#include "StatusViewSource.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FStatusViewSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _remainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PercentageFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInventoryItemType SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SourceIconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SourceLevel;
    
public:
    FStatusViewSource();
};

