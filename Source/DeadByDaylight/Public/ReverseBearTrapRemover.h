#pragma once
#include "CoreMinimal.h"
#include "AIInteractableTargetInterface.h"
#include "Interactable.h"
#include "ReverseBearTrapRemover.generated.h"

class UMapActorComponent;
class UPrimitiveComponent;
class AReverseBearTrap;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API AReverseBearTrapRemover : public AInteractable, public IAIInteractableTargetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    TArray<int32> _keys;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMapActorComponent* _mapActor;
    
public:
    AReverseBearTrapRemover();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRemoveFailMontage();
    
    UFUNCTION(BlueprintPure)
    bool HasSearchedForKey(int32 keyId) const;
    
    UFUNCTION(BlueprintPure)
    bool HasKey(int32 keyId) const;
    
    UFUNCTION(BlueprintPure)
    UMapActorComponent* GetMapActor() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UPrimitiveComponent* GetInteractorPrimitiveComponent() const;
    
protected:
    UFUNCTION(BlueprintPure)
    AReverseBearTrap* GetAttachedRBT(AActor* player) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddSearchedKey(int32 keyId);
    
    UFUNCTION(BlueprintCallable)
    void AddKey(int32 keyId);
    
    
    // Fix for true pure virtual functions not being implemented
};

