#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ActorSpawnedDelegateDelegate.h"
#include "WeightedElement.h"
#include "SpawnElement.h"
#include "EGameplayElementType.h"
#include "ActorSpawnerProperties.h"
#include "ActorSpawner.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorSpawner : public USceneComponent, public IWeightedElement, public ISpawnElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGameplayElementType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> Visualization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ActivatedByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FActorSpawnerProperties> ActivatedSceneElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FActorSpawnerProperties> DeactivatedSceneElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpawnCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpawnPriorityTier;
    
    UPROPERTY(BlueprintAssignable)
    FActorSpawnedDelegate OnAsyncActorSpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WeightInfluenceable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WeightInfluencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cost;
    
    UPROPERTY(Transient)
    UClass* _toSpawn;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> _spawnedActorOnAuthority;
    
public:
    UActorSpawner();
    UFUNCTION(BlueprintCallable)
    bool UseActivatedElement();
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void EditorForceSpawnVisualization();
    
    UFUNCTION(BlueprintCallable)
    void AuthoritySelect(bool selected);
    
    UFUNCTION(BlueprintPure)
    AActor* AuthorityGetSpawnedActor() const;
    
    UFUNCTION(BlueprintCallable)
    void Authority_SpawnActorAsyncEvent();
    
    
    // Fix for true pure virtual functions not being implemented
};

