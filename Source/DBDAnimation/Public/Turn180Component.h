#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Turn180.h"
#include "MovementSettings.h"
#include "Turn180Settings.h"
#include "Turn180Component.generated.h"

UCLASS()
class DBDANIMATION_API UTurn180Component : public UActorComponent, public IMovementSettings, public ITurn180 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    FTurn180Settings _settings;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetSettings(float timestamp, const FTurn180Settings settings);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UTurn180Component();
};

