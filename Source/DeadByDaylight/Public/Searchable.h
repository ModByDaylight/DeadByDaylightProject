#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "ContainsItemInterface.h"
#include "EItemRarity.h"
#include "Searchable.generated.h"

class ADBDPlayer;
class USearchableSpawnPoint;
class UPrimitiveComponent;
class ACollectable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSearchableOnSearchedChanged, bool, searched);

UCLASS()
class DEADBYDAYLIGHT_API ASearchable : public AInteractable, public IAIInteractableTargetInterface, public IContainsItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemRarity ItemRarity;
    
    UPROPERTY(BlueprintAssignable)
    FSearchableOnSearchedChanged OnSearchedChanged;
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ASearchable();
};

