#pragma once
#include "CoreMinimal.h"
#include "ItemData.h"
#include "EExternalEffectSource.h"
#include "EStatusEffectType.h"
#include "StatusEffectProperties.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FStatusEffectProperties : public FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UStatusEffect> StatusEffectBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStatusEffectType StatusEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EExternalEffectSource ExternalEffectSource;
    
    DEADBYDAYLIGHT_API FStatusEffectProperties();
};

