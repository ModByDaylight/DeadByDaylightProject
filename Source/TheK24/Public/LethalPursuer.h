#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "LethalPursuer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULethalPursuer : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _survivorRevealDuration[3];
    
public:
    ULethalPursuer();
private:
    UFUNCTION(Reliable, Server)
    void Server_ActivatePerk();
    
    UFUNCTION()
    void Local_OnIntroCompleted();
    
};

