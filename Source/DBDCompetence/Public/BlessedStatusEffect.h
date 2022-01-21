#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffect.h"
#include "BlessedStatusEffect.generated.h"

class UBlessedVignetteController;
class ATotem;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBlessedStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBlessedVignetteController> _vignetteControllerBlueprint;
    
public:
    UBlessedStatusEffect();
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnExitBoonRange();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEnterBoonRange();
    
public:
    UFUNCTION(BlueprintPure)
    ATotem* GetBoundTotem() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetBoonTotemBlessingRange() const;
    
private:
    UFUNCTION()
    void Authority_OnSurvivorRemovedFromGame(ACamperPlayer* survivor);
    
};

