#pragma once
#include "CoreMinimal.h"
#include "AIInteractableTargetInterface.h"
#include "Interactable.h"
#include "WakerObject.generated.h"

class UCamperDreamworldComponent;
class ADBDPlayer;
class UPrimitiveComponent;

UCLASS()
class DEADBYDAYLIGHT_API AWakerObject : public AInteractable, public IAIInteractableTargetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_LinkedCamperChanged)
    UCamperDreamworldComponent* _linkedCamperDreamworldComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsInteracting;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool _chargeComplete;
    
public:
    AWakerObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisibilityAndOutline();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetChargeComplete(bool complete);
    
protected:
    UFUNCTION()
    void OnRep_LinkedCamperChanged(UCamperDreamworldComponent* previous);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewLinkedCamper(UCamperDreamworldComponent* dreamworldComponent);
    
protected:
    UFUNCTION()
    void OnLinkedCamperDreamStateChanged(bool isInDreamworld, bool locallyObservedChanged);
    
    UFUNCTION()
    void OnAnyCamperDreamStateChanged(bool isInDreamworld, bool locallyObservedChanged);
    
public:
    UFUNCTION()
    void LinkCampersOnLevelReadyToPlay();
    
    UFUNCTION(BlueprintPure)
    bool IsLinkedToCamper(const ADBDPlayer* camper) const;
    
    UFUNCTION(BlueprintPure)
    bool HasLinkedCamper() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsInteracting() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UPrimitiveComponent* GetInteractorPrimitiveComponent() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetInteractionPercentComplete() const;
    
    UFUNCTION(BlueprintPure)
    bool GetChargeComplete() const;
    
    UFUNCTION(BlueprintPure)
    bool CanWakeUpCamper(const ADBDPlayer* camper) const;
    
    UFUNCTION()
    void BindToCamperDreamStateChanged(ADBDPlayer* player);
    
    
    // Fix for true pure virtual functions not being implemented
};

