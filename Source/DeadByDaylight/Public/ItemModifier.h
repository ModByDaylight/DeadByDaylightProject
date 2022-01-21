#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierContainer.h"
#include "GameplayModifierData.h"
#include "ItemModifier.generated.h"

class ACollectable;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UItemModifier : public UGameplayModifierContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ModifierData)
    FGameplayModifierData ModifierData;
    
    UItemModifier();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ModifierData();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleIncreaseMaxCharge();
    
    UFUNCTION(BlueprintCallable)
    void HandleIncreaseItemCount();
    
    UFUNCTION(BlueprintCallable)
    void HandleIncreaseCharge();
    
    UFUNCTION(BlueprintPure)
    float GetItemMaxEnergy() const;
    
    UFUNCTION(BlueprintPure)
    float GetItemEnergy() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCount() const;
    
    UFUNCTION(BlueprintPure)
    ACollectable* GetBaseItem() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthoritySetItemMaxEnergy(float energy);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthoritySetItemEnergy(float energy);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthoritySetItemCount(int32 itemCount);
    
};

