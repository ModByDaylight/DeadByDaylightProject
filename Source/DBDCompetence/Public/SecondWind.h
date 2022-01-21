#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "ESecondWindState.h"
#include "SecondWind.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USecondWind : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    ESecondWindState _currentState;
    
    UPROPERTY(Replicated)
    float _amountHealed;
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _numberOfHealStateToHealToActivate[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _durationOfHeal[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _applyBrokenEffect;
    
public:
    USecondWind();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

