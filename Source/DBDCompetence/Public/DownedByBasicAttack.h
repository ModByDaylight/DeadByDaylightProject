#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "DownedByBasicAttack.generated.h"

UCLASS()
class UDownedByBasicAttack : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedIsTrue)
    bool _replicatedIsTrue;
    
    UFUNCTION()
    void OnRep_ReplicatedIsTrue();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDownedByBasicAttack();
};

