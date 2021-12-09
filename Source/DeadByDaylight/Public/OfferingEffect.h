#pragma once
#include "CoreMinimal.h"
#include "EOfferingEffectType.h"
#include "OfferingEffect.generated.h"

USTRUCT(BlueprintType)
struct FOfferingEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOfferingEffectType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Modifier;
    
    DEADBYDAYLIGHT_API FOfferingEffect();
};

