#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "HighestLevelAndClosestEffectCondition.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHighestLevelAndClosestEffectCondition : public UGameplayModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UStatusEffect*> _effectsLevel1;
    
    UPROPERTY(Export, Transient)
    TArray<UStatusEffect*> _effectsLevel2;
    
    UPROPERTY(Export, Transient)
    TArray<UStatusEffect*> _effectsLevel3;
    
public:
    UHighestLevelAndClosestEffectCondition();
    UFUNCTION(BlueprintCallable)
    void SetCurrentEffectLevel(int32 level);
    
    UFUNCTION(BlueprintCallable)
    void InitEffectArrays(FName effectIDLevel1, FName effectIDLevel2, FName effectIDLevel3);
    
};

