#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "BalancedLanding.generated.h"

class UActivatableExhaustedEffect;

UCLASS()
class THENURSE_API UBalancedLanding : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _sprintDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float _exhaustionDurationPerLevel[3];
    
    UPROPERTY(Export, Transient)
    UActivatableExhaustedEffect* _exhaustedEffect;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_WarnBalancedLandingPredicted();
    
    UFUNCTION(Client, Reliable)
    void Client_UnvalidateBalanceLanding();
    
public:
    UBalancedLanding();
};

