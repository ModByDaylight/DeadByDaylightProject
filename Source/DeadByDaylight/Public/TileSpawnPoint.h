#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/SceneComponent.h"
#include "WeightedElement.h"
#include "SpawnElement.h"
#include "ETileSpawnPointType.h"
#include "TileSpawnPoint.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTileSpawnPoint : public USceneComponent, public IWeightedElement, public ISpawnElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETileSpawnPointType TileSpawnPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> Visualization;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SpawnObject)
    AActor* _spawnedObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ObjectSpawnModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _spawnPriorityTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _weightInfluenceable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _weightInfluencer;
    
    UPROPERTY(Transient)
    bool _activated;
    
public:
    UTileSpawnPoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetActivated(bool activated);
    
protected:
    UFUNCTION()
    void OnRep_SpawnObject();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetSpawnedObject() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

