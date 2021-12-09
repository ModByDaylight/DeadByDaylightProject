#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YawAndPitchRotator_NetQuantize16.generated.h"

USTRUCT(BlueprintType)
struct NETWORKUTILITIES_API FYawAndPitchRotator_NetQuantize16 {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FRotator _value;
    
public:
    FYawAndPitchRotator_NetQuantize16();
};

