#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChargeableInteractionDefinition.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GeneratorTeleportInteraction.generated.h"

class UTimerObject;
class AGenerator;
class ADBDPlayer;
class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THENIGHTMARE_API UGeneratorTeleportInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float OnBloodSpurtsAINoiseEventRange;
    
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_TeleportCooldownTimer)
    UTimerObject* _teleportCooldownTimer;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_SelectedGenerator, meta=(AllowPrivateAccess=true))
    AGenerator* _selectedGenerator;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AGenerator* _locallySelectedGenerator;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTransform _selectedTeleportLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool _isInteractionOngoing;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool _teleportFailed;
    
    UPROPERTY(EditDefaultsOnly)
    float _bloodSpurtInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float _collisionCheckCapsuleHalfHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float _collisionCheckCapsuleRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FVector _collisionCheckLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float _capsuleTraceAngleIncrement;
    
    UPROPERTY(EditDefaultsOnly)
    float _generatorTeleportMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float _downRaycastLength;
    
public:
    UGeneratorTeleportInteraction();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopBloodSpurts();
    
    UFUNCTION(BlueprintCallable)
    void StartBloodSpurts();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowBloodSpurtsVFX();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSelectedGenerator(AGenerator* generator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleportReady();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleportLocationChosen(AGenerator* generator, FTransform location);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleported(FTransform transformBeforeTeleport);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectedGeneratorSet(AGenerator* selectedGenerator);
    
private:
    UFUNCTION()
    void OnRep_TeleportCooldownTimer();
    
    UFUNCTION()
    void OnRep_SelectedGenerator();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLocallySelectedGeneratorSet(AGenerator* selectedGenerator);
    
    UFUNCTION()
    void OnIntroCompleted();
    
    UFUNCTION()
    void OnBloodSpurts();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TeleportPlayer(FVector location, FRotator rotation);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnTeleportLocationChosen(AGenerator* generator, FTransform location);
    
    UFUNCTION(BlueprintPure)
    bool IsTeleportAvailable() const;
    
private:
    UFUNCTION()
    void InitializeTunableValues(ASlasherPlayer* killer);
    
protected:
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetOwningPlayer() const;
    
    UFUNCTION(BlueprintPure)
    AGenerator* GetInlineGenerator(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    bool CanTeleportAtGenerator(AGenerator* generator) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Authority_TeleportPlayerToGenerator(ADBDPlayer* playerToTeleport, AGenerator* generator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_StartTeleportCooldown(bool teleported);
    
};

