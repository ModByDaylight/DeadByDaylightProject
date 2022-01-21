#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBloodOrbVisibilityMode.h"
#include "BloodOrbVisibilityComponent.generated.h"

class ABloodOrb;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEONI_API UBloodOrbVisibilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBloodOrbVisibilityComponent();
    UFUNCTION(BlueprintCallable)
    void SetVisibilityRange(const float visibilityRange);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityMode(const EBloodOrbVisibilityMode visibilityMode);
    
    UFUNCTION(BlueprintCallable)
    void SetShowAttractedBloodOrbsAuras(const bool show);
    
    UFUNCTION(BlueprintCallable)
    void SetAuraVisibilityRange(const float auraVisibilityRange);
    
private:
    UFUNCTION()
    void OnBloodOrbSpawned(const ABloodOrb* bloodOrb) const;
    
};

