#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlastMineTrapComponent.generated.h"

UCLASS()
class UBlastMineTrapComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsTrapActive)
    bool _isTrapActive;
    
    UFUNCTION()
    void OnRep_IsTrapActive();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UBlastMineTrapComponent();
};

