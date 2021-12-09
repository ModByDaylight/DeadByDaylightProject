#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlashlightableComponent.generated.h"

class UFlashlightComponent;
class UFlashlightableLightingStrategy;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlashlightableComponentOnFlashlightAddedEvent, const UFlashlightComponent*, flashlight);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlashlightableComponentOnFlashlightRemovedEvent, const UFlashlightComponent*, flashlight);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlashlightableComponentOnFlashlightLitChangedEvent, bool, isLit);

UCLASS(BlueprintType)
class DBDGAMEPLAY_API UFlashlightableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFlashlightableComponentOnFlashlightAddedEvent OnFlashlightAddedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFlashlightableComponentOnFlashlightRemovedEvent OnFlashlightRemovedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFlashlightableComponentOnFlashlightLitChangedEvent OnFlashlightLitChangedEvent;
    
private:
    UPROPERTY(EditAnywhere, Instanced)
    UFlashlightableLightingStrategy* _lightingStrategy;
    
    UPROPERTY(Export, Transient)
    TSet<UFlashlightComponent*> _flashlights;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLit() const;
    
    UFlashlightableComponent();
};

