#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "ChaseComponent.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChaseComponentOnChaseStarted, ADBDPlayer*, player);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChaseComponentOnChaseEnded, ADBDPlayer*, player, float, chaseTime);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChaseComponentOnIsInChaseChanged, bool, isInChase);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChaseComponentOnAllChaseEnded);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UChaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FChaseComponentOnChaseStarted OnChaseStarted;
    
    UPROPERTY(BlueprintAssignable)
    FChaseComponentOnChaseEnded OnChaseEnded;
    
    UPROPERTY(BlueprintAssignable)
    FChaseComponentOnAllChaseEnded OnAllChaseEnded;
    
    UPROPERTY(BlueprintAssignable)
    FChaseComponentOnIsInChaseChanged OnIsInChaseChanged;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_IsInChase)
    FTagStateBool _isInChase;
    
protected:
    UFUNCTION()
    void OnRep_IsInChase();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInChase() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UChaseComponent();
};

