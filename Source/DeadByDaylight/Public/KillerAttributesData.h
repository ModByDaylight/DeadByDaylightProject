#pragma once
#include "CoreMinimal.h"
#include "EKillerHeight.h"
#include "KillerAttributesData.generated.h"

USTRUCT(BlueprintType)
struct FKillerAttributesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TerrorRadius;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EKillerHeight Height;
    
    DEADBYDAYLIGHT_API FKillerAttributesData();
};

