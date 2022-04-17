#pragma once
#include "CoreMinimal.h"
#include "BaseModifierCondition.h"
#include "GameplayModifierCondition.generated.h"

class ADBDPlayer;
class UGameplayModifierContainer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGameplayModifierCondition : public UBaseModifierCondition {
    GENERATED_BODY()
public:
    UGameplayModifierCondition();
    UFUNCTION(BlueprintCallable)
    void SetOwningGameplayModifier(UGameplayModifierContainer* OwningGameplayModifier);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOwningGameplayModifierSet();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsApplicable() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetOwningPlayer() const;
    
    UFUNCTION(BlueprintPure)
    UGameplayModifierContainer* GetOwningGameplayModifier() const;
    
};

