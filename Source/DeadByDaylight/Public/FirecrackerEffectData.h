#pragma once
#include "CoreMinimal.h"
#include "FirecrackerEffectData.generated.h"

class AFirecracker;

USTRUCT(BlueprintType)
struct FFirecrackerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AFirecracker* Firecracker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsInRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFirstTime;
    
    DEADBYDAYLIGHT_API FFirecrackerEffectData();
};

