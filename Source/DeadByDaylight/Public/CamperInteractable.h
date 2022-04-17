#pragma once
#include "CoreMinimal.h"
#include "AIInteractableTargetInterface.h"
#include "PlayerInteractable.h"
#include "CamperInteractable.generated.h"

class UInteractor;
class UChargeableInteractionDefinition;
class UChargeableComponent;
class UInteractionDefinition;
class UActivatorComponent;
class UBoxComponent;
class USphereComponent;
class USceneComponent;
class ACamperPlayer;

UCLASS()
class DEADBYDAYLIGHT_API ACamperInteractable : public APlayerInteractable, public IAIInteractableTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TArray<UInteractor*> HealingInteractors;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TArray<UChargeableInteractionDefinition*> _healInteractions;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _killCharge;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _snapOutOfItCharge;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _wakeUpCharge;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _crowDismissCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UActivatorComponent* _activator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInteractor* _killInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* _killInteractionZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* _killHealthyInteractionZone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* _mainInteractionZone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInteractor* _healingInteractor1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInteractor* _selfInteractionsInteractor;
    
    UPROPERTY(Export, Transient)
    USceneComponent* _rootComponent;
    
public:
    ACamperInteractable();
private:
    UFUNCTION()
    void UpdateTargetHPSlot();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetKillInteraction(UInteractionDefinition* killInteraction);
    
private:
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveOut();
    
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UInteractor* GetSlasherInteractor() const;
    
public:
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetOwningSurvivor() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

