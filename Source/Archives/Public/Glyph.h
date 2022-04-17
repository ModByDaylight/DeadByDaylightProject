#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "GameplayTagContainer.h"
#include "SpecialBehaviourInteractable.h"
#include "EAllowedPlayerType.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "Glyph.generated.h"

class UNearTrackedActorComponent;
class ADBDPlayer;
class UInteractor;
class ADBDPlayerState;
class UChargeableComponent;
class UGlyphInteraction;
class UStaticMeshComponent;
class UPrimitiveComponent;
class UDBDOutlineComponent;
class AActor;

UCLASS()
class AGlyph : public ASpecialBehaviourInteractable, public INavAgentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PlayersWithVisibility)
    TArray<ADBDPlayer*> _playersWithVisibility;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _oldPlayersWithVisibility;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName _specialBehaviourId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EAllowedPlayerType _allowedPlayerType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TWeakObjectPtr<ADBDPlayer> lastPlayerToStartInteraction;
    
    UPROPERTY(Replicated, Transient)
    TArray<TWeakObjectPtr<ADBDPlayerState>> _isGlyphActivatedForPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    bool _grantChallengeProgress;
    
    UPROPERTY(EditDefaultsOnly)
    bool _isAlwaysActivated;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGlyphInteraction* _glyphInteraction;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGlyphInteraction* _glyphInteractionKiller;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _glyphInteractionChargeable;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _glyphInteractionChargeableKiller;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInteractor* _glyphInteractor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* _glyphInteractionZone;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* _glyphMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNearTrackedActorComponent* _nearTrackedActorComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _associatedSurvivorScoreEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _associatedKillerScoreEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _glyphInteractionSecondsToCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _glyphInteractionSecondsToChargeKiller;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _glyphDetectionRange;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _auraColorWhileInteracting;
    
    UPROPERTY(Replicated, Transient)
    TArray<ADBDPlayer*> _playersThatInteractedWithGlyph;
    
public:
    AGlyph();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_PlayersWithVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool DoesLocalPlayerHaveVisibility();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnStoppedInteracting();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnGlyphVisibilityChanged(ADBDPlayer* interactingPlayer, bool isVisible);
    
private:
    UFUNCTION()
    void Authority_TrackPlayerWithBehaviourID(const ADBDPlayer* dbdPlayer);
    
    UFUNCTION()
    void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, const AActor* trackedActor);
    
    UFUNCTION()
    void Authority_OnIntroCompleted();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void Authority_OnInteractionCompleted(ADBDPlayer* interactingPlayer);
    
    
    // Fix for true pure virtual functions not being implemented
};

