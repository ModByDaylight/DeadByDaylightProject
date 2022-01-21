#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemAddon.h"
#include "BlightedSerumAddon.generated.h"

class ACollectable;
class UBlightedSerumDashInteraction;

UCLASS(meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumAddon : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ACollectable> _blightedSerumCollectable;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_DashInteraction)
    UBlightedSerumDashInteraction* _dashInteraction;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _theBlightExtraTokens;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _numberOfDashesPerEvent;
    
public:
    UBlightedSerumAddon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_DashInteraction();
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnBlightedDashEnabledVfxSfx();
    
};

