#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "K24CheatComponent.generated.h"

class AZombiesManagement;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK24CheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AZombiesManagement> _zombieManagementClass;
    
    UPROPERTY(Transient)
    AZombiesManagement* _zombiesManagement;
    
public:
    UK24CheatComponent();
    UFUNCTION(Exec)
    void DBD_TeleportZombiesTo(float x, float y, float z);
    
    UFUNCTION(Exec)
    void DBD_K24ZombieFall(const float Zvalue);
    
    UFUNCTION(Exec)
    void DBD_K24StopAllZombies();
    
    UFUNCTION(Exec)
    void DBD_K24StartAllZombies();
    
    UFUNCTION(Exec)
    void DBD_K24SpawnZombieOnKiller();
    
    UFUNCTION(Exec)
    void DBD_K24SetPowerLevelPoints(const float value);
    
    UFUNCTION(Exec)
    void DBD_K24SetContaminationOnSurvivor(const bool value);
    
    UFUNCTION(Exec)
    void DBD_K24ComeToMeMyZombies();
    
};

