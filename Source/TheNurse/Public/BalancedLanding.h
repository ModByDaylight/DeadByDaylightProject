#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "BalancedLanding.generated.h"

class UActivatableExhaustedEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
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
    
public:
    UBalancedLanding();
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_WarnBalancedLandingPredicted();
    
    UFUNCTION(Client, Reliable)
    void Client_UnvalidateBalanceLanding();
    
};

