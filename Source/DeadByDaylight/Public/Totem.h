#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interactable.h"
#include "AIPointOfInterestTargetInterface.h"
#include "DBDTunableRowHandle.h"
#include "ETotemState.h"
#include "Totem.generated.h"

class UGameplayTagContainerComponent;
class USceneComponent;
class UBlockableComponent;
class UTotemBoundPerk;
class UAIPerceptionStimuliSourceComponent;
class ULocalPlayerTrackerComponent;
class UActivatorComponent;
class UTotemOutlineUpdateStrategy;
class ADBDPlayer;
class ATotem;
class UInteractor;
class UChargeableInteractionDefinition;

UCLASS()
class DEADBYDAYLIGHT_API ATotem : public AInteractable, public IAIPointOfInterestTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _boonAuraRevealColor;
    
private:
    UPROPERTY(Export, Replicated, Transient)
    TArray<UTotemBoundPerk*> _boundPerks;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TotemState)
    ETotemState _totemState;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _baseBoonTotemBlessingRange;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _baseBoonTotemAuraRevealRange;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;
    
    UPROPERTY(Export, Transient)
    UBlockableComponent* _totemBlockableComponent;
    
    UPROPERTY(Export, Transient)
    ULocalPlayerTrackerComponent* _localPlayerTracker;
    
    UPROPERTY(Export)
    UActivatorComponent* _activatorComponent;
    
    UPROPERTY(Export)
    UGameplayTagContainerComponent* _objectState;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* _interactionsAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTotemOutlineUpdateStrategy* _totemOutlineUpdateStrategy;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool _canBeBoundToBoonPerk;
    
public:
    ATotem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnUnblockTotemCosmetic(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTotemStateChanged(const ETotemState oldTotemState, const ETotemState newTotemState);
    
private:
    UFUNCTION()
    void OnTotemBlockChanged();
    
    UFUNCTION()
    void OnRep_TotemState(const ETotemState oldTotemState);
    
    UFUNCTION()
    void OnLocallyObservedChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCleanseTotem(ATotem* totem, const ETotemState oldTotemState);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnBlockTotemCosmetic(ADBDPlayer* player);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTotemBlockedForPlayer(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBoundToPerk() const;
    
    UFUNCTION(BlueprintPure)
    ETotemState GetTotemState() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UInteractor* GetMainInteractor() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UChargeableInteractionDefinition* GetCleanseTotemInteraction() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoonTotemBlessingRange() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoonTotemAuraRevealRange() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetBoonAuraRevealColor() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UChargeableInteractionDefinition* GetBlessTotemInteraction() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

