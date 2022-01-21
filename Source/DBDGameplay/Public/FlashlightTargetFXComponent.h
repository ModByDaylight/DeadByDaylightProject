#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlashlightTargetFXComponent.generated.h"

class UFlashlightableComponent;

UCLASS(Abstract, BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightTargetFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    bool _modifiesBeamAngle;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UFlashlightableComponent* _flashlightable;
    
public:
    UFlashlightTargetFXComponent();
private:
    UFUNCTION()
    void OnIsLitChanged(bool isLit);
    
};

