#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EInventoryType.h"
#include "CharacterInventoryComponent.generated.h"

class ACollectable;
class UItemAddon;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCharacterInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Inventory)
    TArray<ACollectable*> _inventory;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_GeneralAddons)
    TArray<UItemAddon*> _generalAddons;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BackpackInventory)
    TArray<ACollectable*> _backpackInventory;
    
    UPROPERTY(Export, Transient)
    TArray<UItemAddon*> _allAddons;
    
public:
    UCharacterInventoryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StoreItem();
    
    UFUNCTION(BlueprintCallable)
    void StartDrop(ACollectable* item);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    ACollectable* SpawnCollectedItem(FName itemID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveFromInventory(ACollectable* item);
    
private:
    UFUNCTION()
    void OnRep_Inventory();
    
    UFUNCTION()
    void OnRep_GeneralAddons();
    
    UFUNCTION()
    void OnRep_BackpackInventory();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RemoveFromInventory(ACollectable* item);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ClearAndDestroyInventory();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddToInventory(ACollectable* item, EInventoryType inventoryType);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUsingAimItem() const;
    
    UFUNCTION(BlueprintPure)
    bool HasStoredItem() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMaximumItemCount(const ACollectable* item) const;
    
    UFUNCTION(BlueprintPure)
    bool HasItem() const;
    
    UFUNCTION(BlueprintPure)
    bool HasInInventory(TSubclassOf<ACollectable> item, EInventoryType inventoryType);
    
    UFUNCTION(BlueprintPure)
    bool HasEquippedItem() const;
    
    UFUNCTION(BlueprintPure)
    FName GetItemID() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCountByID(FName itemID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCount() const;
    
    UFUNCTION(BlueprintPure)
    ACollectable* GetItem() const;
    
    UFUNCTION(BlueprintPure)
    ACollectable* GetFirstItemFromInventory(TSubclassOf<ACollectable> item, EInventoryType inventoryType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UItemAddon*> GetAddons();
    
    UFUNCTION(BlueprintCallable)
    void EquipItem();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Drop(ACollectable* item, const FVector& location, const FRotator& rotation, bool onDeath, bool adjustToGround, bool dropInChest);
    
    UFUNCTION(BlueprintCallable)
    void Collect(ACollectable* item, EInventoryType inventoryType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearAndDestroyInventory();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_UseInventoryItem();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddToInventory(ACollectable* item, EInventoryType inventoryType);
    
};

