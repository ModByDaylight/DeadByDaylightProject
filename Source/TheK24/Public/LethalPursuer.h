#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "LethalPursuer.generated.h"

UCLASS()
class ULethalPursuer : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _survivorRevealDuration[3];
    
    UFUNCTION(Reliable, Server)
    void Server_ActivatePerk();
    
    UFUNCTION()
    void Local_OnIntroCompleted();
    
public:
    ULethalPursuer();
};

