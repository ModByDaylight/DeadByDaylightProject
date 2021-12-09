#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PortalRadiusDetectorComponent.generated.h"

class ADemogorgonPortal;
class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FPortalRadiusDetectorComponentCallback);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UPortalRadiusDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ADemogorgonPortal*> Portals;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PlayersInsideRadius)
    TArray<ADBDPlayer*> _playersInsideRadius;
    
    UFUNCTION()
    void OnRep_PlayersInsideRadius();
    
    UFUNCTION()
    void Authority_OnLevelReadyToPlay();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_CallOnPortalEffectsApplied(FPortalRadiusDetectorComponentCallback callback);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPortalRadiusDetectorComponent();
};

