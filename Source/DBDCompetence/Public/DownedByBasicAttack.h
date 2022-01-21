#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "DownedByBasicAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDownedByBasicAttack : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedIsTrue)
    bool _replicatedIsTrue;
    
public:
    UDownedByBasicAttack();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ReplicatedIsTrue();
    
};

