#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PortalRestrictedLocation.h"
#include "PortalPlacerStateComponent.generated.h"

class ASlasherPlayer;
class ADemogorgonPortal;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPortalPlacerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDemogorgonTeleportCooldownComplete);
    
    UPROPERTY(BlueprintAssignable)
    FOnDemogorgonTeleportCooldownComplete OnTeleportCooldownComplete;
    
private:
    UPROPERTY(Replicated, Transient)
    int32 _remainingPortals;
    
    UPROPERTY(Replicated, Transient)
    TArray<ADemogorgonPortal*> _placedPortals;
    
    UPROPERTY(Replicated, Transient)
    TArray<FPortalRestrictedLocation> _restrictedPortalLocations;
    
public:
    UPortalPlacerStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
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
    
};

