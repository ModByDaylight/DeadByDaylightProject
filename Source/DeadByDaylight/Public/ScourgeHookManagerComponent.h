#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScourgeHookManagerComponent.generated.h"

class AMeatHook;

UCLASS()
class DEADBYDAYLIGHT_API UScourgeHookManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ScourgeHooks)
    TArray<AMeatHook*> _scourgeHooks;
    
    UFUNCTION()
    void OnRep_ScourgeHooks();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UScourgeHookManagerComponent();
};

