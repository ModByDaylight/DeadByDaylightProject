#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemModifier.h"
#include "ItemAddonInitializationData.h"
#include "ItemAddon.generated.h"

class ACollectable;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UItemAddon : public UItemModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACollectable> BaseItemType;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool _needsSetup;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AddonInitializationData)
    FItemAddonInitializationData _addonInitializationData;
    
public:
    UItemAddon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetUpAddon();
    
private:
    UFUNCTION()
    void OnRep_AddonInitializationData();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostItemAddonsCreation(ADBDPlayer* player, ACollectable* item);
    
private:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetBaseItem(ACollectable* baseItem);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddAddonToItem(ACollectable* item);
    
    UFUNCTION(BlueprintPure)
    bool IsSecondaryAction() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool IsReadyForSetUp() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void DebugPrintStats();
    
    UFUNCTION(BlueprintNativeEvent)
    void Authority_OnCollectablePickedUp(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Authority_OnCollectableDropped(ADBDPlayer* player);
    
private:
    UFUNCTION()
    void Authority_ApplyMetaModifiers();
    
};

