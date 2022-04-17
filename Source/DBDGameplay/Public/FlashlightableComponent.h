#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlashlightableComponent.generated.h"

class UFlashlightComponent;
class UFlashlightableLightingStrategy;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlashlightLitChangedEvent, bool, isLit);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlashlightAddedRemovedEvent, const UFlashlightComponent*, flashlight);
    
    UPROPERTY(BlueprintAssignable)
    FOnFlashlightAddedRemovedEvent OnFlashlightAddedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFlashlightAddedRemovedEvent OnFlashlightRemovedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnFlashlightLitChangedEvent OnFlashlightLitChangedEvent;
    
private:
    UPROPERTY(EditAnywhere, Instanced)
    UFlashlightableLightingStrategy* _lightingStrategy;
    
    UPROPERTY(Export, Transient)
    TSet<UFlashlightComponent*> _flashlights;
    
public:
    UFlashlightableComponent();
    UFUNCTION(BlueprintPure)
    bool IsLit() const;
    
};

