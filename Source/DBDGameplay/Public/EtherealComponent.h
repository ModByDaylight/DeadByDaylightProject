#pragma once
#include "CoreMinimal.h"
#include "Ethereal.h"
#include "Components/ActorComponent.h"
#include "MovementSettings.h"
#include "EtherealComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UEtherealComponent : public UActorComponent, public IMovementSettings, public IEthereal {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_OnIsEtherealChanged)
    bool _isEthereal;
    
public:
    UEtherealComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsEthereal(float timestamp, bool ethereal);
    
    UFUNCTION()
    void OnRep_OnIsEtherealChanged();
    
    
    // Fix for true pure virtual functions not being implemented
};

