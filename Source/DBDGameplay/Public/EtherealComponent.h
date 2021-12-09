#pragma once
#include "CoreMinimal.h"
#include "Ethereal.h"
#include "Components/ActorComponent.h"
#include "MovementSettings.h"
#include "EtherealComponent.generated.h"

UCLASS()
class DBDGAMEPLAY_API UEtherealComponent : public UActorComponent, public IMovementSettings, public IEthereal {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_OnIsEtherealChanged)
    bool _isEthereal;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsEthereal(float timestamp, bool ethereal);
    
    UFUNCTION()
    void OnRep_OnIsEtherealChanged();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UEtherealComponent();
};

