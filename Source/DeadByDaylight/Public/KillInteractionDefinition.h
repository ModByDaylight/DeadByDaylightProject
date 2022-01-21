#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "KillInteractionDefinition.generated.h"

class ADBDPlayer;
class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillInteractionDefinition : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool _disableFOVSystemDuringInteraction;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FString> _nonOverrideableTargetInteractions;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool _chargeCompleted;
    
    UPROPERTY(EditDefaultsOnly)
    bool _isKillShownInThirdPerson;
    
    UPROPERTY(EditDefaultsOnly)
    bool _manuallyManageMeshHiding;
    
    UPROPERTY(EditAnywhere)
    FAnimationMontageDescriptor _exitMontage;
    
public:
    UKillInteractionDefinition();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMoriCancelled();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnKillAudioActivation(const bool active, ADBDPlayer* interactingPlayer);
    
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetOwningSurvivor() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FAnimationMontageDescriptor GetExitAnimationMontage() const;
    
    UFUNCTION(BlueprintPure)
    bool GetChargeCompleted() const;
    
};

