#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MontageStopDefinition.h"
#include "SnappingData.h"
#include "EMovementCurveType.h"
#include "MontagePlaybackDefinition.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "YawAndPitchRotator_NetQuantize32.h"
#include "DBDCharacterMovementComponent.generated.h"

class UBaseCharacterRotationStrategy;
class UBaseCharacterVelocityAdditiveStrategy;
class UBaseInputAccelerationConstraintStrategy;
class AActor;
class UAnimMontage;
class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ProjectedWallSlidingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomInputFrontMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomInputSideMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomInputBackMultiplier;
    
private:
    UPROPERTY(EditAnywhere)
    bool _forceUseDropStaggerFix;
    
    UPROPERTY(Export, Transient)
    UBaseCharacterVelocityAdditiveStrategy* _velocityAdditiveStrategy;
    
    UPROPERTY(Export, Transient)
    UBaseInputAccelerationConstraintStrategy* _inputAccelerationConstraintStrategy;
    
    UPROPERTY(Export, Transient)
    UBaseCharacterRotationStrategy* _rotationStrategy;
    
    UPROPERTY(Transient)
    AActor* _lookAtTarget;
    
public:
    UDBDCharacterMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetRandomInputAmplitude(float value);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StopMontage(float timestamp, const FMontageStopDefinition montageStopDefinition);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StartSnapping(float timestamp, const FSnappingData data);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetStopSnapping(float timestamp, const bool snapToFinalDestination);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetMaxSpeedMultiplierScalar(float timestamp, float value);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetMaxAcceleration(float timestamp, float value);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetGroundFriction(float timestamp, float value);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetAdditiveMaxSpeedScalar(float timestamp, float value);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ReplicateControlRotation(uint8 clientRoll, uint32 view);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RemoveMaxSpeedMovementCurve(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_PlayMontage(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Launch(float timestamp, FVector launchVelocity);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AddMaxSpeedMovementCurve(float timestamp, const uint32 curveNetId, float duration, const EMovementCurveType movementCurveType);
    
    UFUNCTION()
    void OnPreMontageStop(const FMontageStopDefinition montageDefinition, const UAnimMontage* montage);
    
    UFUNCTION()
    void OnMontageStarted(const FMontagePlaybackDefinition& montageDefinition, const UAnimMontage* montage);
    
public:
    UFUNCTION(BlueprintCallable)
    void Local_AddMaxSpeedMultiplierCurve(const UCurveFloat* curve, float duration, bool autoRemove);
    
    UFUNCTION(BlueprintPure)
    bool IsSnappingRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSnappingPosition() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSnapping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsApplyingRandomInput() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentSnapPosition() const;
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_TeleportTo(FVector_NetQuantize100 location, FYawAndPitchRotator_NetQuantize32 rotation);
    
    UFUNCTION(Client, Reliable)
    void Client_Stop();
    
    UFUNCTION(Client, Reliable)
    void Client_PreventMovement(const bool value);
    
};

