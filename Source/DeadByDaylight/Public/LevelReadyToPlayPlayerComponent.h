#pragma once
#include "CoreMinimal.h"
#include "LevelReadyToPlayRequirements.h"
#include "Components/ActorComponent.h"
#include "LevelReadyToPlayPlayerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULevelReadyToPlayPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LevelReadyToPlayRequirementsTarget)
    TArray<FLevelReadyToPlayRequirements> _levelReadyToPlayRequirementsTarget;
    
public:
    ULevelReadyToPlayPlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsReadyToPlay(bool readyToPlay);
    
    UFUNCTION()
    void OnRep_LevelReadyToPlayRequirementsTarget();
    
};

