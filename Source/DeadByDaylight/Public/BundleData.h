#pragma once
#include "CoreMinimal.h"
#include "ItemUIData.h"
#include "BundleData.generated.h"

USTRUCT()
struct FBundleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    FItemUIData UIData;
    
    DEADBYDAYLIGHT_API FBundleData();
};

