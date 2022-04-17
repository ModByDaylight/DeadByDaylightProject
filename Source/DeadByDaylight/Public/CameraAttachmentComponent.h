#pragma once
#include "CoreMinimal.h"
#include "CameraAttachment.h"
#include "Components/ActorComponent.h"
#include "CameraAttachmentComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCameraAttachmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* _anchor;
    
    UPROPERTY(Transient)
    FCameraAttachment _defaultCameraAttachment;
    
    UPROPERTY(Transient)
    FCameraAttachment _currentCameraAttachment;
    
public:
    UCameraAttachmentComponent();
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintPure)
    bool IsAttached() const;
    
    UFUNCTION(BlueprintCallable)
    void Detach();
    
};

