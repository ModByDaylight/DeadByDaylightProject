#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PoolableActor.h"
#include "BasePoolableActorComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBasePoolableActorComponentOnAcquiredChanged, const bool, acquired);

UCLASS(Abstract, BlueprintType)
class GAMEPLAYUTILITIES_API UBasePoolableActorComponent : public UActorComponent, public IPoolableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBasePoolableActorComponentOnAcquiredChanged OnAcquiredChanged;
    
    UFUNCTION(BlueprintCallable)
    void SetAcquired(bool active);
    
    UFUNCTION(BlueprintPure)
    bool IsAcquired() const;
    
    UBasePoolableActorComponent();
};

