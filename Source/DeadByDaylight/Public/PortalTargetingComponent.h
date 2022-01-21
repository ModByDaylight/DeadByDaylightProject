#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PortalTargetingComponent.generated.h"

class ADemogorgonPortal;
class UPortalPlacerStateComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPortalTargetingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADemogorgonPortal* _targetedPortal;
    
    UPROPERTY(Export, Transient)
    UPortalPlacerStateComponent* _portalPlacerState;
    
public:
    UPortalTargetingComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsPorting(bool isPorting);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetTargetedPortal(ADemogorgonPortal* targetedPortal);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetTargetedPortal(ADemogorgonPortal* targetedPortal);
    
public:
    UFUNCTION(BlueprintCallable)
    ADemogorgonPortal* GetTargetedPortal();
    
};

