#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffect.h"
#include "UObject/NoExportTypes.h"
#include "TwinJumpTargetVisibleEffect.generated.h"

class AActor;
class USelectiveVisibilityComponent;

UCLASS()
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
    
    UFUNCTION()
    void OnJumpTargetTick(FVector location);
    
    UFUNCTION()
    void OnHideTargetPosition();
    
public:
    UTwinJumpTargetVisibleEffect();
};

