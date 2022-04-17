#pragma once
#include "CoreMinimal.h"
#include "AIInteractableTargetInterface.h"
#include "Interactable.h"
#include "ContainsItemInterface.h"
#include "EItemRarity.h"
#include "Searchable.generated.h"

class UPrimitiveComponent;
class USearchableSpawnPoint;
class ACollectable;
class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API ASearchable : public AInteractable, public IAIInteractableTargetInterface, public IContainsItemInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSearchedChanged, bool, searched);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemRarity ItemRarity;
    
    UPROPERTY(BlueprintAssignable)
    FOnSearchedChanged OnSearchedChanged;
    
private:
    UPROPERTY(Export)
    USearchableSpawnPoint* _searchableSpawnPoint;
    
    UPROPERTY(EditInstanceOnly)
    FName _itemIdToSpawn;
    
    UPROPERTY()
    bool _hasBeenSearched;
    
    UPROPERTY(Replicated, Transient)
    ACollectable* _itemInsideSearchable;
    
    UPROPERTY(Transient)
    TMap<ADBDPlayer*, uint8> _numberOfSearchesWhileOpenPerPlayer;
    
public:
    ASearchable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetHasBeenSearched(bool newHasBeenSearched);
    
    UFUNCTION(BlueprintPure)
    bool HasBeenSearched() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UPrimitiveComponent* GetInteractorPrimitiveComponent() const;
    
    UFUNCTION()
    bool ContainsSpawnedItem() const;
    
    UFUNCTION(BlueprintCallable)
    ACollectable* Authority_SpawnObject(ADBDPlayer* player);
    
    
    // Fix for true pure virtual functions not being implemented
};

