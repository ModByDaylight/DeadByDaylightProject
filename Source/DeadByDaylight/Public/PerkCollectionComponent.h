#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerkCollectionComponent.generated.h"

class UPerk;

UCLASS()
class DEADBYDAYLIGHT_API UPerkCollectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Array)
    TArray<UPerk*> _array;
    
    UFUNCTION()
    void OnRep_Array(const TArray<UPerk*>& oldArray);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPerkCollectionComponent();
};
