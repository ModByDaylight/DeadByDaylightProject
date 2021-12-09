#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StateMachine.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UStateMachine : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool _enableJoinInProgress;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=NetIDStackChanged)
    TArray<uint16> _netStateIDStackInitial;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetStateStack(const TArray<uint16>& netStateIDStack);
    
    UFUNCTION()
    void NetIDStackChanged();
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetStateStack(const TArray<uint16>& netStateIDStack);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UStateMachine();
};

