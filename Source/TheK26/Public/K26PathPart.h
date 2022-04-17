#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K26PathPart.generated.h"

class UStaticMeshComponent;
class UDBDOutlineComponent;
class UNiagaraComponent;
class UK26PowerOutlineUpdateStrategy;
class USceneComponent;

UCLASS()
class AK26PathPart : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Export)
    UStaticMeshComponent* _mesh;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UNiagaraComponent* _visualEffectKiller;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UNiagaraComponent* _visualEffectSurvivor;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* _rootComponent;
    
    UPROPERTY(Transient)
    bool _isVisibleForSurvivor;
    
    UPROPERTY(Transient)
    bool _isVisibleForKiller;
    
public:
    AK26PathPart();
};

