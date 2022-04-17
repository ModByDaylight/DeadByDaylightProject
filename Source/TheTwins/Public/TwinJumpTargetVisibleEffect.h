#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffect.h"
#include "UObject/NoExportTypes.h"
#include "TwinJumpTargetVisibleEffect.generated.h"

class USelectiveVisibilityComponent;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinJumpTargetVisibleEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> _twinJumpTargetObject;
    
    UPROPERTY(Transient)
    AActor* _twinJumpTarget;
    
    UPROPERTY(Export, Transient)
    USelectiveVisibilityComponent* _jumpTargetVisibility;
    
public:
    UTwinJumpTargetVisibleEffect();
private:
    UFUNCTION()
    void OnJumpTargetTick(FVector location);
    
    UFUNCTION()
    void OnHideTargetPosition();
    
};

