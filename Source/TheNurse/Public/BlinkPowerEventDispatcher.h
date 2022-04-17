#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlinkPowerEventDispatcher.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkPowerEventDispatcher : public UActorComponent {
    GENERATED_BODY()
public:
    /*UPROPERTY(BlueprintAssignable)
    FOnFXEvent OnFinishPlaying;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXEvent OnStartBlinkChargeEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXUpdate OnUpdateBlinkChargeEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnBlinkChargeStop OnStopBlinkChargeEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXEvent OnEnterBlinkEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXUpdate OnUpdateBlinkEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXEvent OnExitBlinkEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXEvent OnEnterChainBlinkEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXUpdate OnUpdateChainBlinkEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXEvent OnExitChainBlinkEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXEvent OnEnterCooldownEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXUpdate OnUpdateCooldownEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXEvent OnExitCooldownEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsBlinkingChanged OnIsBlinkingChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsChargingBlinkChanged OnIsChargingBlinkChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFXEvent OnBlinkChargeFullEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnBlinkPowerStateChanged OnBlinkPowerStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnBlinkChargesChanged OnBlinkChargesChangedEvent;*/
    
    UBlinkPowerEventDispatcher();
};

