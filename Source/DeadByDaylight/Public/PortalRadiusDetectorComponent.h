#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnPortalEffectsApplied.h"
#include "PortalRadiusDetectorComponent.generated.h"

class ADemogorgonPortal;
class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPortalRadiusDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPortalEffectsAppliedMultiDelegate);
    
private:
    UPROPERTY(Transient)
    TArray<ADemogorgonPortal*> Portals;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PlayersInsideRadius)
    TArray<ADBDPlayer*> _playersInsideRadius;
    
public:
    UPortalRadiusDetectorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_PlayersInsideRadius();
    
    UFUNCTION()
    void Authority_OnLevelReadyToPlay();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_CallOnPortalEffectsApplied(FOnPortalEffectsApplied callback);
    
};

