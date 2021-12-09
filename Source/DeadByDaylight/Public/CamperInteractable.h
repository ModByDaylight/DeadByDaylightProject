#pragma once
#include "CoreMinimal.h"
#include "PlayerInteractable.h"
#include "AIInteractableTargetInterface.h"
#include "CamperInteractable.generated.h"

class USphereComponent;
class UActivatorComponent;
class UInteractor;
class UChargeableInteractionDefinition;
class UChargeableComponent;
class UBoxComponent;
class USceneComponent;
class UInteractionDefinition;
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
    
    ACamperInteractable();
};

