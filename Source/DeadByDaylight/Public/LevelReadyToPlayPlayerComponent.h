#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelReadyToPlayRequirements.h"
#include "LevelReadyToPlayPlayerComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ULevelReadyToPlayPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LevelReadyToPlayRequirementsTarget)
    TArray<FLevelReadyToPlayRequirements> _levelReadyToPlayRequirementsTarget;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsReadyToPlay(bool readyToPlay);
    
    UFUNCTION()
    void OnRep_LevelReadyToPlayRequirementsTarget();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ULevelReadyToPlayPlayerComponent();
};

