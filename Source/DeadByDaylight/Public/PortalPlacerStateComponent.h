#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PortalRestrictedLocation.h"
#include "PortalPlacerStateComponent.generated.h"

class ADemogorgonPortal;
class ASlasherPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPortalPlacerStateComponentOnTeleportCooldownComplete);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UPortalPlacerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPortalPlacerStateComponentOnTeleportCooldownComplete OnTeleportCooldownComplete;
    
private:
    UPROPERTY(Replicated, Transient)
    int32 _remainingPortals;
    
    UPROPERTY(Replicated, Transient)
    TArray<ADemogorgonPortal*> _placedPortals;
    
    UPROPERTY(Replicated, Transient)
    TArray<FPortalRestrictedLocation> _restrictedPortalLocations;
    
    UFUNCTION()
    void UpdateRemainingPortalCount();
    
public:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION(BlueprintPure)
    bool IsUsePortalCooldownDone() const;
    
private:
    UFUNCTION()
    void InitializeTunableValues(ASlasherPlayer* killer);
    
public:
    UFUNCTION(BlueprintPure)
    float GetTeleportDuration() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainingPortalCount() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPortalPlacerStateComponent();
};

