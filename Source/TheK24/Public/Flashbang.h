#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Flashbang.generated.h"

class AGenerator;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UFlashbang : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGenerator* _generatorBeingRepaired;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GeneratorsRepairProgress)
    float _generatorsRepairTargetProgression;
    
    UPROPERTY(EditDefaultsOnly)
    float _generatorRepairPercentToCraftFlashbang[3];
    
public:
    UFlashbang();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_GeneratorsRepairProgress();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnGeneratorRepairProgressionTargetAchieved();
    
private:
    UFUNCTION(Client, Unreliable)
    void Client_OnGeneratorRepairProgressionTargetAchieved();
    
    UFUNCTION()
    void Authority_OnRepairProgressApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);
    
};

