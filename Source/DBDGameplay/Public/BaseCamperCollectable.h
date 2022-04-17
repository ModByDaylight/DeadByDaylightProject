#pragma once
#include "CoreMinimal.h"
#include "Collectable.h"
#include "BaseCamperCollectable.generated.h"

class UMaterialHelper;
class USpherePlayerOverlapComponent;
class USurvivorCollectableOutlineUpdateStrategy;
class UInteractor;
class UDropItemInteraction;
class UCollectItemInteraction;
class USphereComponent;
class UDBDOutlineComponent;

UCLASS()
class DBDGAMEPLAY_API ABaseCamperCollectable : public ACollectable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USpherePlayerOverlapComponent* _interactable;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UInteractor* _collectableInteractor;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDropItemInteraction* _dropInteraction;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCollectItemInteraction* _collectInteraction;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USphereComponent* _infectablePrimitive;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UMaterialHelper* _materialHelper;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USurvivorCollectableOutlineUpdateStrategy* _survivorCollectableOutlineUpdateStrategy;
    
public:
    ABaseCamperCollectable();
};

