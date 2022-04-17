#pragma once
#include "CoreMinimal.h"
#include "DBDPlayer.h"
#include "DBDTunableRowHandle.h"
#include "FastTimer.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "FirecrackerEffectData.h"
#include "ConjoinedTwin.generated.h"

class URangeToActorsTrackerComponent;
class UTwinOutlineUpdateStrategy;
class UAkComponent;
class UDBDAttackerComponent;
class UCustomizedAudioComponent;
class UKillerBlindingFXComponent;
class UHitValidatorComponent;
class UAnimationMontageSlave;
class UHitValidatorConfigurator;
class UTwinFirstPersonViewComponent;
class UFlashlightableComponent;
class UBlindFlashlightTargetFXComponent;
class UFirecrackerEffectHandlerComponent;
class UTwinPossessNegationEffectComponent;

UCLASS()
class AConjoinedTwin : public ADBDPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    URangeToActorsTrackerComponent* _restrictedPossessionAreaTracker;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UTwinOutlineUpdateStrategy* _twinOutlineUpdateStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UAkComponent* _twinLullabyAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UKillerBlindingFXComponent* _twinBlindingFX;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    UCustomizedAudioComponent* _customizedAudio;
    
    UPROPERTY(Export, Transient)
    UDBDAttackerComponent* _attackerComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maxWalkSpeed;
    
    UPROPERTY(Export, VisibleAnywhere)
    UHitValidatorComponent* _hitValidator;
    
    UPROPERTY(Export, VisibleAnywhere)
    UHitValidatorConfigurator* _hitValidationConfigurator;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _gravityScale;
    
    UPROPERTY(Export, Transient)
    UAnimationMontageSlave* _animationFollower;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _revealDurationOnAttached;
    
    UPROPERTY(Export, Transient)
    UTwinFirstPersonViewComponent* _firstPersonViewComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UFlashlightableComponent* _eyesFlashlightable;
    
    UPROPERTY(Export, Transient, VisibleAnywhere)
    UBlindFlashlightTargetFXComponent* _blindFlashlightTargetFXComponent;
    
    UPROPERTY(Export, Transient, VisibleAnywhere)
    UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent;
    
    UPROPERTY(Transient)
    FFastTimer _flashlightBlindEvasionScoreTimer;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _flashlightEvasionScoreCooldown;
    
    UPROPERTY(Export, Transient, VisibleAnywhere)
    UTwinPossessNegationEffectComponent* _twinPossessNegationEffectComponent;
    
public:
    AConjoinedTwin();
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendAttackInput(bool pressed);
    
private:
    UFUNCTION()
    void OnFinishedPlayingEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled);
    
    UFUNCTION()
    void Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData);
    
};

