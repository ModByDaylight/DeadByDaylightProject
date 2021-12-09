#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalletPulldownBlockerComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPalletPulldownBlockerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsPalletPulldownBlockedByEntity)
    bool _isPalletPulldownBlockedByEntity;
    
    UPROPERTY(EditDefaultsOnly)
    float _blockedDisappearFxTime;
    
    UFUNCTION()
    void OnRep_IsPalletPulldownBlockedByEntity();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PalletPulldownBlockedShowCosmetic();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PalletPulldownBlockedHideCosmetic();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPalletPulldownBlockerComponent();
};

