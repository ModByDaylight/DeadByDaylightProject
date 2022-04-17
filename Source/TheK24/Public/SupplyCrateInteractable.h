#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Interactable.h"
#include "ContainsItemInterface.h"
#include "DBDTunableRowHandle.h"
#include "SupplyCrateInteractable.generated.h"

class UChargeableComponent;
class ACollectable;
class USceneComponent;

UCLASS()
class ASupplyCrateInteractable : public AInteractable, public IContainsItemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _chargeableComponent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACollectable> _contamainationSerumCollectable;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _openInteractionSecondsToCharge;
    
    UPROPERTY(Replicated, Transient)
    ACollectable* _itemInSupplyCrate;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* _itemSpawnPoint;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* _itemDropPoint;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsOpen)
    bool _isOpen;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsAutoClosing)
    bool _isAutoClosing;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _crateSelfClosingTime;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _crateAutoCloseAnimationTime;
    
public:
    ASupplyCrateInteractable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_IsOpen();
    
    UFUNCTION()
    void OnRep_IsAutoClosing();
    
    
    // Fix for true pure virtual functions not being implemented
};

