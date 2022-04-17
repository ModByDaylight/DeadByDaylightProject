#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChaseStartDelegateDelegate.h"
#include "TagStateBool.h"
#include "OnIsInChaseChangedDelegate.h"
#include "ChaseEndDelegateDelegate.h"
#include "AllChasesEndedDelegateDelegate.h"
#include "ChaseComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FChaseStartDelegate OnChaseStarted;
    
    UPROPERTY(BlueprintAssignable)
    FChaseEndDelegate OnChaseEnded;
    
    UPROPERTY(BlueprintAssignable)
    FAllChasesEndedDelegate OnAllChaseEnded;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsInChaseChanged OnIsInChaseChanged;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_IsInChase)
    FTagStateBool _isInChase;
    
public:
    UChaseComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_IsInChase();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInChase() const;
    
};

