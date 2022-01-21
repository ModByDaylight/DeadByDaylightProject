#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalletPulldownBlockerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPalletPulldownBlockerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsPalletPulldownBlockedByEntity)
    bool _isPalletPulldownBlockedByEntity;
    
    UPROPERTY(EditDefaultsOnly)
    float _blockedDisappearFxTime;
    
public:
    UPalletPulldownBlockerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_IsPalletPulldownBlockedByEntity();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PalletPulldownBlockedShowCosmetic();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PalletPulldownBlockedHideCosmetic();
    
};

