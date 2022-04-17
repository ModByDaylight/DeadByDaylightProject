#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "EBlindType.h"
#include "BlindableBaseComponent.generated.h"

class AActor;
class UChargeableComponent;
class UBlindingEffectorInterface;
class IBlindingEffectorInterface;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlindableBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsBlinded)
    bool _isBlinded;
    
    UPROPERTY(Replicated, Transient)
    FTagStateBool _isBeingBlinded;
    
private:
    UPROPERTY(Export)
    UChargeableComponent* _chargeableComponent;
    
    UPROPERTY(Transient)
    TMap<AActor*, TScriptInterface<IBlindingEffectorInterface>> _blindingEffectors;
    
public:
    UBlindableBaseComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetChargeable(UChargeableComponent* value);
    
private:
    UFUNCTION()
    void OnRep_IsBlinded();
    
    UFUNCTION()
    void OnChargeableCompletionPercentChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBlinded() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RemoveBlindingEffector(TScriptInterface<IBlindingEffectorInterface> effector);
    
    UFUNCTION(BlueprintCallable)
    void Authority_Blinded(EBlindType blindType, float blindnessDuration, AActor* effectorActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AddBlindingEffector(TScriptInterface<IBlindingEffectorInterface> effector);
    
};

