#pragma once
#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "Perk.h"
#include "Solidarity.generated.h"

class AActor;
class UChargeableComponent;
class UChargeableInteractionDefinition;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USolidarity : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool _allowMedkit;
    
    UPROPERTY(Export, Transient)
    UChargeableComponent* _healerHPSlot;
    
    UPROPERTY(Export, Transient)
    UChargeableComponent* _targetHPSlot;
    
    UPROPERTY(Export, Transient)
    UChargeableInteractionDefinition* _healOtherInteraction;
    
public:
    USolidarity();
private:
    UFUNCTION()
    void Authority_OnSkillCheckResponse(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);
    
    UFUNCTION()
    void Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);
    
};

