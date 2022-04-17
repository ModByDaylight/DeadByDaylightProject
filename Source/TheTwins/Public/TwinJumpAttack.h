#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "TwinJumpAttack.generated.h"

class UCurveFloat;
class ADBDPlayer;
class UPhysicalMaterial;
class AConjoinedTwin;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinJumpAttack : public UPounceAttack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _jumpVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _jumpAngleCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _upDownObstructionAnglePrecision;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _leftRightObstructionAnglePrecision;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _authorizedLandingHeight;
    
    UPROPERTY(ReplicatedUsing=OnRep_ShouldTwinHaveJumpObjectType)
    bool _shouldTwinHaveJumpObjectType;
    
public:
    UTwinJumpAttack();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StopJump();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnJumpStartTwin();
    
private:
    UFUNCTION()
    void OnRep_ShouldTwinHaveJumpObjectType();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DestroyTwinOnWrongLanding();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AttachToSurvivor(ADBDPlayer* survivorToAttachTo);
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnJumpStarted(AConjoinedTwin* owningTwin);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnJumpObstructed(AConjoinedTwin* owningTwin, UPhysicalMaterial* physicalMaterial, FVector position, FVector normal);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnJumpLanded(AConjoinedTwin* owningTwin);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnJumpCooldownChanged(bool isInJumpCooldown, AConjoinedTwin* owningTwin);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, AConjoinedTwin* twin);
    
private:
    UFUNCTION(Client, Reliable)
    void Client_Debug_PrintFinalDecisionOnScreen(bool foundPath);
    
};

