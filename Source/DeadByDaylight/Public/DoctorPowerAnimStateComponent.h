#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDoctorAbilityType.h"
#include "EDoctorAbilityPhase.h"
#include "DoctorPowerAnimStateComponent.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDoctorPowerAnimStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EDoctorAbilityType _abilityType;
    
    UPROPERTY(BlueprintReadOnly)
    EDoctorAbilityPhase _abilityPhase;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAbilityType(EDoctorAbilityType abilityType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAbilityPhase(EDoctorAbilityPhase abilityPhase);
    
    UDoctorPowerAnimStateComponent();
};

