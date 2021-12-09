#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELeanState.h"
#include "GhostStalkPowerComponent.generated.h"

class UStalkerComponent;
class UGhostStalkedComponent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UGhostStalkPowerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UStalkerComponent* _stalkerComponent;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGhostStalkedComponent> _ghostStalkedComponentClassPtr;
    
    UPROPERTY(EditAnywhere)
    float _crouchAttackRequiredTimeSeconds;
    
    UPROPERTY(EditAnywhere)
    bool _debugMode;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RefreshSurvivorMaximumSightDistance() const;
    
private:
    UFUNCTION()
    void OnLeanStateChanged(ELeanState leanState);
    
    UFUNCTION()
    void OnIsCrouchedChanged(bool isCrouched);
    
    UFUNCTION()
    void Authority_OnStalkModeChanged(bool isInStalkMode);
    
public:
    UGhostStalkPowerComponent();
};

