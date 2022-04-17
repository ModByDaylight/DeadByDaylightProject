#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "ECollectableCategory.h"
#include "EAtlantaItemProgressionBarEnum.h"
#include "EItemHandPosition.h"
#include "ELoadoutItemType.h"
#include "EInputInteractionType.h"
#include "ECollectableState.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "EAttachToSocketNameEnum.h"
#include "EInventoryType.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Collectable.generated.h"

class UInteractor;
class ADBDPlayer;
class UItemModifier;
class USkeletalMeshComponent;
class UGameplayTagContainerComponent;
class USceneComponent;
class UItemAddon;
class AActor;
class ACamperPlayer;

UCLASS()
class DEADBYDAYLIGHT_API ACollectable : public AInteractable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCollectablePickedUpBPDelegate, ADBDPlayer*, player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollectablePickedUpBP, ADBDPlayer*, player);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisplayUsePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAtlantaItemProgressionBarEnum ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OverridenItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StrafeOnUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AimOnUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool VisibleWhenEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopRunningOnUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemHandPosition HandPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableArmOverrideDuringInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasUseInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECollectableCategory Category;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsInUse;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName ItemID;
    
    UPROPERTY()
    bool FromPlayerSpawn;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UItemModifier* BaseItemModifier;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UItemModifier* ItemModifier1;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UItemModifier* ItemModifier2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ShouldRegisterToOnSurvivorAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnCollectablePickedUpBP OnCollectablePickedUpBP;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool BeingCollected;
    
    UPROPERTY(BlueprintReadWrite)
    bool BeingDropped;
    
    UPROPERTY(BlueprintReadWrite)
    bool _beingConsumedByEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UInteractor* _itemInteractor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USkeletalMeshComponent* _mesh;
    
    UPROPERTY(EditDefaultsOnly)
    EInputInteractionType _displayedInputType;
    
    UPROPERTY(Export)
    UGameplayTagContainerComponent* _objectState;
    
    UPROPERTY(EditDefaultsOnly)
    bool _isBoundToFirstCollector;
    
private:
    UPROPERTY(Export, VisibleDefaultsOnly)
    USceneComponent* _placementOrigin;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Collector)
    ADBDPlayer* _collector;
    
    UPROPERTY(Transient)
    ADBDPlayer* _firstCollector;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_State)
    ECollectableState _state;
    
    UPROPERTY(Export, Transient)
    TArray<UItemAddon*> _itemAddons;
    
    UPROPERTY(Replicated, Transient)
    int32 _itemCount;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BegunPlayFenceName)
    FGuid _begunPlayFenceName;
    
    UPROPERTY(EditDefaultsOnly)
    EAttachToSocketNameEnum _attachToSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    EInventoryType _collectInInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _stateTagForCollector;
    
    UPROPERTY(EditDefaultsOnly)
    ELoadoutItemType _itemType;
    
    UPROPERTY(EditDefaultsOnly)
    bool _discardWhenConsumed;
    
    UPROPERTY(EditDefaultsOnly)
    bool _disableAttachmentReplication;
    
public:
    ACollectable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void SetVisibilityEvent(bool visibility);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetItemInteractor(UInteractor* interactor);
    
    UFUNCTION()
    void SetDisplayedInputType(const EInputInteractionType displayedInputType);
    
    UFUNCTION(BlueprintCallable)
    void SetCount(int32 count);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Discard();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnUseReleased(ADBDPlayer* collector);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnUse();
    
private:
    UFUNCTION()
    void OnRep_State();
    
    UFUNCTION()
    void OnRep_Collector();
    
    UFUNCTION()
    void OnRep_BegunPlayFenceName();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostItemAddonsCreation(ADBDPlayer* player);
    
private:
    UFUNCTION()
    void OnFenceInitialized();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDropped(ADBDPlayer* droppingPlayer);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCustomizationChanged();
    
private:
    UFUNCTION()
    void OnCollectorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnCollected(ADBDPlayer* collector);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddonsRemoved(const TArray<UItemAddon*>& addons);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddonsAdded(const TArray<UItemAddon*>& addons);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnActivateDissolveItem();
    
protected:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_UseReleased(ADBDPlayer* collector);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_Use();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RemoveItemAddon(UItemAddon* addon);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RemoveAllAddons();
    
protected:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_Dropped(ADBDPlayer* droppedBy, const FVector& location, const FRotator& rotation);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_Collected(ADBDPlayer* collector);
    
public:
    UFUNCTION(BlueprintCallable)
    void Local_Dropped_Location(ADBDPlayer* droppedBy, const FVector& location, const FRotator& rotation);
    
    UFUNCTION(BlueprintPure)
    bool IsStored() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsRechargeable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPickable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnGround() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInSearchable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsCountDisplayForced() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCollected() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingUsed() const;
    
    UFUNCTION(BlueprintPure)
    bool HasGameplayModifierFlag(FGameplayTag modifierFlag) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetUsePercentLeft() const;
    
    UFUNCTION(BlueprintPure)
    float GetModifierSum(FGameplayTag modifierType, float defaultValue) const;
    
    UFUNCTION(BlueprintPure)
    float GetModifierMax(FGameplayTag modifierType, float defaultValue) const;
    
    UFUNCTION(BlueprintPure)
    UInteractor* GetItemInteractor() const;
    
    UFUNCTION(BlueprintNativeEvent)
    uint8 GetItemIconIndex() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItemAddon*> GetItemAddons();
    
    UFUNCTION(BlueprintPure)
    FString GetIconFilePath() const;
    
    UFUNCTION()
    EInputInteractionType GetDisplayedInputType() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetCount() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetCollector() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void DebugPrintStats();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanUse() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanBeDropped(const ADBDPlayer* dropper) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanBeCollected(const ADBDPlayer* collector) const;
    
    UFUNCTION(BlueprintCallable)
    void CallOnCollectablePickedUpBP(ACollectable::FOnCollectablePickedUpBPDelegate callback);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSurvivorAdded(ACamperPlayer* survivor);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_UseReleased();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Use();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RemoveItemAddon(UItemAddon* addon);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_OnConsumed(bool forceDiscard);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Discard();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AddItemAddon(UItemAddon* addon);
    
};

