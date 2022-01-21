#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "BuiltToLast.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UBuiltToLast : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _refillPercentage[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _hideDuration[3];
    
private:
    UPROPERTY(Replicated, Transient)
    uint8 _numberOfTimesPerkTriggered;
    
public:
    UBuiltToLast();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnBuiltToLastTrigger_Cosmetic();
    
};

