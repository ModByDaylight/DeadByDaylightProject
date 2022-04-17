#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAttackType.h"
#include "DBDTunableRowHandle.h"
#include "AttackDelegatePair.h"
#include "DBDAttackerComponent.generated.h"

class UDBDAttack;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAttackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttackPhaseChangedDelegate, const EAttackType, attackType);
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnAttackPhaseChangedDelegate OnAttackStartDelegate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnAttackPhaseChangedDelegate OnAttackFinishDelegate;
    
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _autonomousHitPredictionDelay;
    
    UPROPERTY(Export, Transient)
    TArray<UDBDAttack*> _attacks;
    
    UPROPERTY(Export, Transient)
    UDBDAttack* _requestedAttack;
    
    UPROPERTY(Export, Transient)
    UDBDAttack* _currentAttack;
    
    UPROPERTY(Transient)
    TArray<FAttackDelegatePair> _attackHitDelegates;
    
public:
    UDBDAttackerComponent();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StoreAttack(const EAttackType attackType);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StoreAttack(const EAttackType attackType);
    
public:
    UFUNCTION(BlueprintCallable)
    void Local_RequestAttack(const EAttackType attackType);
    
    UFUNCTION(BlueprintPure)
    bool IsAttackTransitionRequested(const EAttackType attackType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyAttackTransitionRequested() const;
    
};

