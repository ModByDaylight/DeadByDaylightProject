#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "NativeBlockIndicatorData.h"
#include "VaultData.h"
#include "Window.generated.h"

class UChildActorComponent;
class ADBDPlayer;
class UAkAudioEvent;
class UMaterialHelper;
class UAkComponent;
class ACamperPlayer;
class ULocalPlayerTrackerComponent;
class UBlockableComponent;
class UDBDNavEvadeLoopComponent;
class UInteractionDefinition;

UCLASS()
class DEADBYDAYLIGHT_API AWindow : public AInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FNativeBlockIndicatorData NativeSmokeOtherIndicatorData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FNativeBlockIndicatorData NativeEntityIndicatorData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FNativeBlockIndicatorData NativeSmokeSelfIndicatorData;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_blockedByLevel)
    bool _isBlockedByLevel;
    
private:
    UPROPERTY(Export, Transient)
    UChildActorComponent* _entityAssets;
    
    UPROPERTY(Export, Transient)
    UMaterialHelper* _materialHelper;
    
    UPROPERTY(Export, Transient)
    UAkComponent* _akAudioWindow;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* akAudioEventWindowsBlocStart;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* akAudioEventWindowsBlocStop;
    
    UPROPERTY(Transient)
    TMap<ACamperPlayer*, FVaultData> _survivorVaultData;
    
    UPROPERTY(Export, Transient)
    ULocalPlayerTrackerComponent* _localPlayerTracker;
    
    UPROPERTY(Export, Transient)
    UBlockableComponent* _blockableComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDNavEvadeLoopComponent* _navEvadeLoopComponent;
    
public:
    AWindow();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_blockedByLevel();
    
    UFUNCTION()
    void OnLocallyObservedChanged();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFastVault(ADBDPlayer* player, UInteractionDefinition* interaction);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyOnFastVault(ADBDPlayer* player, UInteractionDefinition* interaction);
    
    UFUNCTION(BlueprintPure)
    bool IsWindowVaultBlockedForAnyPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWindowVaultBlockedFor(const ADBDPlayer* player) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UMaterialHelper* GetMaterialHelper() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UChildActorComponent* GetEntityAssets() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool GetBlockedByLevel() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UAkComponent* GetAudioComponent() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceBlockLocalWindowInteraction(bool blockInteraction);
    
    UFUNCTION(BlueprintCallable)
    void Authority_SetBlockedByLevel(bool isBlockedByLevel);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_OnVaultInternal(ADBDPlayer* player, bool canBlockVault);
    
};

