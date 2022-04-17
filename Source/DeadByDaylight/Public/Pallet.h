#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "EPalletState.h"
#include "PalletPushSettings.h"
#include "EPalletStunZoneSideStrategy.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Pallet.generated.h"

class UBoxComponent;
class UInteractionDefinition;
class USkeletalMeshComponent;
class AActor;
class ADBDPlayer;
class UDBDNavEvadeLoopComponent;
class UPalletPulldownBlockerComponent;
class UPrimitiveComponent;
class ACamperPlayer;

UCLASS()
class DEADBYDAYLIGHT_API APallet : public AInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PalletDownEvadeDoorFrontPointOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    EPalletState _state;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool _isIllusionaryPalletDown;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* _illusionaryPallet;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UInteractionDefinition* _destroyLeft;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UInteractionDefinition* _destroyRight;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* _pushBox;
    
    UPROPERTY(EditAnywhere)
    float _maxDotproductThresholdForPulldownAccross;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _fallDuration;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* _stunBoxLeft;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* _stunBoxRight;
    
    UPROPERTY(Transient)
    TSet<AActor*> _stunnedActors;
    
    UPROPERTY(Transient)
    ADBDPlayer* _playerExecutingPulldown;
    
    UPROPERTY(Transient)
    FPalletPushSettings _pushSettings;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDNavEvadeLoopComponent* _navEvadeLoopComponent;
    
    UPROPERTY(Export, Transient)
    UPalletPulldownBlockerComponent* _palletPulldownBlockerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDreamPallet;
    
public:
    APallet();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateIllusionaryPallet();
    
    UFUNCTION(BlueprintCallable)
    void SetPalletState(EPalletState state);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetIllusionaryPallet(USkeletalMeshComponent* pallet);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ResetPallet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PulldownPallet();
    
    UFUNCTION(BlueprintCallable)
    void PullDown(ADBDPlayer* player, const FPalletPushSettings& pushSettings, const EPalletStunZoneSideStrategy stunZoneSideStrategy);
    
private:
    UFUNCTION()
    void OnStunOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPalletStunHit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPalletPulledUp_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPalletPulldownBlockedByEntityShow();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPalletPulldownBlockedByEntityHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFallen();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StunPlayer(AActor* actor, ACamperPlayer* survivor, bool stunBreakPallet);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ResetPallet();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PulldownPallet();
    
    UFUNCTION(BlueprintPure)
    bool IsPulldownBlockedByEntity() const;
    
protected:
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetPlayerDoingPulldown() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsPulledDown() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsDreamPallet() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetFallDuration() const;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void GetDestructibleAreaPrimitiveComponents(TArray<UPrimitiveComponent*>& prims) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExplodeStunPallet(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExplodePallet(ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    bool CanPulldown(const ADBDPlayer* player, const FVector& interactionAxis, const bool isStationary) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Authority_StunSlashersinStunZone(AActor* actor);
    
private:
    UFUNCTION()
    void Authority_OnOverlapPushBox(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
};

