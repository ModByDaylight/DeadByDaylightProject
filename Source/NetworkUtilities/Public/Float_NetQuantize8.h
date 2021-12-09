#pragma once
#include "CoreMinimal.h"
#include "Float_NetQuantize8.generated.h"

USTRUCT(BlueprintType)
struct NETWORKUTILITIES_API FFloat_NetQuantize8 {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float _value;
    
public:
    FFloat_NetQuantize8();
};

