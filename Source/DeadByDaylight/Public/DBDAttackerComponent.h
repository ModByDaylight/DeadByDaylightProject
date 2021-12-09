#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAttackType.h"
#include "AttackDelegatePair.h"
#include "DBDAttackerComponent.generated.h"

class UDBDAttack;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDBDAttackerComponentOnAttackStartDelegate, const EAttackType, attackType);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDBDAttackerComponentOnAttackFinishDelegate, const EAttackType, attackType);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDAttackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FDBDAttackerComponentOnAttackStartDelegate OnAttackStartDelegate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FDBDAttackerComponentOnAttackFinishDelegate OnAttackFinishDelegate;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UDBDAttack*> _attacks;
    
    UPROPERTY(Export, Transient)
    UDBDAttack* _requestedAttack;
    
    UPROPERTY(Export, Transient)
    UDBDAttack* _currentAttack;
    
    UPROPERTY(Transient)
    TArray<FAttackDelegatePair> _attackHitDelegates;
    
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
    
    UDBDAttackerComponent();
};

