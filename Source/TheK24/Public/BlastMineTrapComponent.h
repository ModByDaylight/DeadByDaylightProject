#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlastMineTrapComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UBlastMineTrapComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsTrapActive)
    bool _isTrapActive;
    
public:
    UBlastMineTrapComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_IsTrapActive();
    
};

