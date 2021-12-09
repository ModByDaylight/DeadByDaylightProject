#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SocketOrBoneCache.h"
#include "ELeanState.h"
#include "AutomaticLeanComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAutomaticLeanComponentOnCanInitiateLeanChanged, bool, canInitiate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAutomaticLeanComponentOnLeanStateChanged, ELeanState, leanState);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAutomaticLeanComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAutomaticLeanComponentOnLeanStateChanged OnLeanStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAutomaticLeanComponentOnCanInitiateLeanChanged OnCanInitiateLeanChanged;
    
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketOrBoneCache _cameraIdleLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketOrBoneCache _cameraLeftLeanLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketOrBoneCache _cameraRightLeanLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketOrBoneCache _cameraCrouchLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketOrBoneCache _cameraCrouchLeftLeanLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketOrBoneCache _cameraCrouchRightLeanLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _middleSphereTraceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sideSphereTraceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sphereTraceRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _standingTraceHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _crouchingTraceHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sideTraceOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maxMovementDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maxCameraAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _debugMode;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LeanState)
    ELeanState _leanState;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetLeanState(ELeanState leanState);
    
    UFUNCTION()
    void OnRep_LeanState();
    
public:
    UFUNCTION(BlueprintCallable)
    void Local_Unlean();
    
    UFUNCTION(BlueprintCallable)
    void Local_Lean();
    
    UFUNCTION(BlueprintPure)
    bool IsLeaning() const;
    
    UFUNCTION(BlueprintPure)
    ELeanState GetPotentialLeanState() const;
    
    UFUNCTION(BlueprintPure)
    ELeanState GetLeanState() const;
    
    UFUNCTION(BlueprintPure)
    float GetAvailableDistanceInFrontOfCamera() const;
    
    UFUNCTION(BlueprintPure)
    bool CanInitiateLean() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UAutomaticLeanComponent();
};

