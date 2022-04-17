#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpectatingActorLinker.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "UObject/NoExportTypes.h"
#include "FastTimer.h"
#include "UObject/NoExportTypes.h"
#include "K25Gateway.generated.h"

class UActorComponent;
class UCameraComponent;

UCLASS()
class AK25Gateway : public AActor, public ISpectatingActorLinker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _rayCastZOffet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _rayCastLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> _distancePercentLocations;
    
    UPROPERTY(EditDefaultsOnly)
    float _survivorGatewayRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _minimumIndicatorVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _indicatorVelocityEasingFactor;
    
    UPROPERTY(EditAnywhere)
    float _minimumTimeBeforeTargetLocationMulticast;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _minDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTunableStat _maxDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _gatewayPlacementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _pitchLevelChangeAngleThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _pitchLevelChangeZoneThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _maximumCameraPitchOrientationAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _minimumCameraPitchOrientationAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _maxGatewayPossessionDuration;
    
private:
    UPROPERTY(Export, Transient)
    UActorComponent* _visualComponent;
    
    UPROPERTY(Transient)
    FVector _targetLocation;
    
    UPROPERTY(Export, VisibleAnywhere)
    UCameraComponent* _cameraPlacementComponent;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsGatewayPossessed)
    bool _isGatewayPossessed;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsBeingPositionned)
    bool _isBeingPositionned;
    
    UPROPERTY(Transient)
    FFastTimer _possessionTimer;
    
public:
    AK25Gateway();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server)
    void Server_StartGatewayPossession(FVector possessionLocation, FRotator gatewayRotation);
    
    UFUNCTION(Reliable, Server)
    void Server_SetIsGatewayBeingPositionned(bool isBeingPositionned);
    
    UFUNCTION(Server, Unreliable)
    void Server_SetGatewayTargetLocation(FVector targetLocation, bool isValidLocation);
    
    UFUNCTION(Server, Unreliable)
    void Server_SetGatewayOrientation(FRotator rotation);
    
public:
    UFUNCTION(Reliable, Server)
    void Server_EndGatewayPossession();
    
private:
    UFUNCTION()
    void OnRep_IsGatewayPossessed();
    
    UFUNCTION()
    void OnRep_IsBeingPositionned();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_SetGatewayTargetLocation(FVector targetLocation, bool isValidLocation);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_SetGatewayOrientation(FRotator rotation);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetGatewayLocation(FVector possessionLocation);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsGatewayPossessed() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UCameraComponent* GetCameraComponent() const;
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerInvalidGatewayPlacementSFX();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerGatewayUnpossessedEffects();
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerGatewayPossessionCancel();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerGatewayPossessedEffects(const float transitionTime);
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerGatewayPlacementStop();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerGatewayPlacementStart();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerGatewayPlacementCancel();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_SetKillerVisualVisibility(bool isVisible);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_SetIsGatewayPositionValid(bool isGatewayPlacementValid);
    
    
    // Fix for true pure virtual functions not being implemented
};

