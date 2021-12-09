#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDBDCameraSocketID.h"
#include "CameraHandlerComponent.generated.h"

class USceneComponent;
class AActor;
class UCurveFloat;
class UParticleSystemComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraHandlerComponentOnSocketChanged, EDBDCameraSocketID, SocketId);

UCLASS(BlueprintType, EditInlineNew)
class DEADBYDAYLIGHT_API UCameraHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCameraHandlerComponentOnSocketChanged OnSocketChanged;
    
private:
    UPROPERTY(Transient)
    TMap<EDBDCameraSocketID, AActor*> _cameraMap;
    
    UPROPERTY(Replicated, Transient)
    EDBDCameraSocketID _delayedSocketID;
    
    UPROPERTY(Transient)
    EDBDCameraSocketID _currentSocketID;
    
    UPROPERTY(Transient)
    bool _manualZoomAllowPerkModifiers;
    
    UPROPERTY(Transient)
    UCurveFloat* _manualZoomCurveFloat;
    
    UPROPERTY(EditAnywhere)
    FName _cameraAttachmentSocket;
    
    UPROPERTY(Export)
    USceneComponent* _cameraAttachmentComponent;
    
    UPROPERTY(Transient)
    bool _isFOVSystemActive;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSocketID(EDBDCameraSocketID mode);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachmentComponent(USceneComponent* attachmentComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlayVFXOnCurrentCamera(UParticleSystemComponent* component);
    
    UFUNCTION(BlueprintCallable)
    EDBDCameraSocketID GetSocketID();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCurrentCamera();
    
    UFUNCTION(BlueprintCallable)
    void AddCameraToSocket(EDBDCameraSocketID mode, AActor* camera);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCameraHandlerComponent();
};

