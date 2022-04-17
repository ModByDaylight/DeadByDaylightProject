#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerspectiveEffectData.h"
#include "PerspectiveEffectActivator.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPerspectiveEffectActivator : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FName, FPerspectiveEffectData> _perspectiveEffects;
    
public:
    UPerspectiveEffectActivator();
    UFUNCTION(BlueprintCallable)
    void UnregisterEffect(FName effectName);
    
    UFUNCTION(BlueprintCallable)
    void SetWantsActive(FName effectName, bool wantsActive);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEffect(FName effectName, FPerspectiveEffectData effectData);
    
    UFUNCTION(BlueprintCallable)
    bool IsEffectActive(FName effectName);
    
};

