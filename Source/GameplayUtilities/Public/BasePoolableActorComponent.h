#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PoolableActor.h"
#include "OnAcquiredChangedDelegate.h"
#include "BasePoolableActorComponent.generated.h"

UCLASS(Abstract, BlueprintType, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UBasePoolableActorComponent : public UActorComponent, public IPoolableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAcquiredChanged OnAcquiredChanged;
    
    UBasePoolableActorComponent();
    UFUNCTION(BlueprintCallable)
    void SetAcquired(bool active);
    
    UFUNCTION(BlueprintPure)
    bool IsAcquired() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

