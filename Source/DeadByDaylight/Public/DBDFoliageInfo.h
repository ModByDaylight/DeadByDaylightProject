#pragma once
#include "CoreMinimal.h"
#include "DBDFoliageInstance.h"
#include "DBDFoliageInfo.generated.h"

class UFoliageType;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FDBDFoliageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UFoliageType* foliageType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FDBDFoliageInstance> instances;
    
    FDBDFoliageInfo();
};

