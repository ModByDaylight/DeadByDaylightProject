#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SlashableInterface.h"
#include "GameplayTagContainer.h"
#include "CamperSlashableComponent.generated.h"

class UCapsuleComponent;
class USlashableActivationSourceCollection;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperSlashableComponent : public UActorComponent, public ISlashableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCapsuleComponent* _slashableZone;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCapsuleComponent* _hookSlashableZone;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float _standingCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float _crouchCapsuleHalfHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _slashableDisablingStateTags;
    
    UPROPERTY(EditDefaultsOnly)
    float _sourceActivationLingerDuration;
    
private:
    UPROPERTY(Export, Transient)
    USlashableActivationSourceCollection* _slashableActivationSources;
    
public:
    UCamperSlashableComponent();
    UFUNCTION(BlueprintCallable)
    void SetUseCrouchSlashableCapsule(bool useCrouchCapsule);
    
    UFUNCTION(BlueprintCallable)
    void SetStandingCapsuleHalfHeight(float height);
    
    UFUNCTION(BlueprintCallable)
    void SetSlashableZone(UCapsuleComponent* zone);
    
    UFUNCTION(BlueprintCallable)
    void SetHookSlashableZone(UCapsuleComponent* zone);
    
    UFUNCTION(BlueprintCallable)
    void SetCrouchCapsuleHalfHeight(float height);
    
    
    // Fix for true pure virtual functions not being implemented
};

