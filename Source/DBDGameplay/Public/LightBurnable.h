#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FirecrackerEffectData.h"
#include "LightBurnable.generated.h"

class UFirecrackerEffectHandlerComponent;
class UFlashlightableComponent;
class AActor;
class UChargeableComponent;
class UFlashlightComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLightBurnableOnBurnChargeCompleteEvent, const TArray<AActor*>&, instigatorsForCompletion);

UCLASS(BlueprintType)
class DBDGAMEPLAY_API ULightBurnable : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLightBurnableOnBurnChargeCompleteEvent OnBurnChargeCompleteEvent;
    
    UPROPERTY(Transient)
    TArray<AActor*> FirecrackerLineOfSightIgnoredActors;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _chargeable;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UFlashlightableComponent* _flashlightable;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UFirecrackerEffectHandlerComponent* _firecrackerEffectHandler;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsBurning)
    bool _isBurning;
    
    UFUNCTION()
    void OnRep_IsBurning();
    
protected:
    UFUNCTION()
    void OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion);
    
    UFUNCTION()
    void OnBurnChargeEmpty();
    
    UFUNCTION()
    void Authority_OnFlashlightAddedRemoved(const UFlashlightComponent* flashlight);
    
    UFUNCTION()
    void Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ULightBurnable();
};

