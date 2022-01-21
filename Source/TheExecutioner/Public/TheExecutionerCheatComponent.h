#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TheExecutionerCheatComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTheExecutionerCheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTheExecutionerCheatComponent();
    UFUNCTION(Exec)
    void DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer(const bool value, const FString& localPlayerId);
    
    UFUNCTION(Exec)
    void DBD_SetAgonyOnLocallyControlledPlayer(const bool value, const FString& localPlayerId);
    
    UFUNCTION(Exec)
    void DBD_LocalKillSurvivorInDeathBed();
    
    UFUNCTION(Exec)
    void DBD_DisplayAllDeathBed(bool value);
    
    UFUNCTION(Exec)
    void DBD_DeathBedPlayStruggleHitReaction();
    
};

