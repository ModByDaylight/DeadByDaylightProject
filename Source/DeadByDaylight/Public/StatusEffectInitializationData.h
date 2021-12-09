#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "StatusEffectInitializationData.generated.h"

class ADBDPlayer;
class UGameplayModifierContainer;

USTRUCT(BlueprintType)
struct FStatusEffectInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    ADBDPlayer* OriginatingPlayer;
    
    UPROPERTY()
    bool HasOriginatingPlayer;
    
    UPROPERTY(Export)
    UGameplayModifierContainer* OriginatingEffect;
    
    UPROPERTY()
    bool HasOriginatingEffect;
    
    UPROPERTY()
    EStatusEffectType StatusEffectType;
    
    UPROPERTY()
    float CustomParam;
    
    UPROPERTY()
    float InitializationLifeTime;
    
    UPROPERTY()
    bool AuthorityDataSet;
    
    DEADBYDAYLIGHT_API FStatusEffectInitializationData();
};

