#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScourgeHookManagerComponent.generated.h"

class AMeatHook;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UScourgeHookManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ScourgeHooks)
    TArray<AMeatHook*> _scourgeHooks;
    
public:
    UScourgeHookManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ScourgeHooks();
    
};

