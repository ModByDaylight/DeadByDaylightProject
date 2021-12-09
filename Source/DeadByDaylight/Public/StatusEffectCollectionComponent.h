#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusEffectCollectionComponent.generated.h"

class UStatusEffect;

UCLASS()
class DEADBYDAYLIGHT_API UStatusEffectCollectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Array)
    TArray<UStatusEffect*> _array;
    
    UPROPERTY(Export, Transient)
    TArray<UStatusEffect*> _local_oldArray;
    
    UFUNCTION()
    void OnRep_Array();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UStatusEffectCollectionComponent();
};

