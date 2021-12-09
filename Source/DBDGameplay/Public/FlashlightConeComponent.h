#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "FlashlightConeComponent.generated.h"

class AActor;
class USceneComponent;

UCLASS(BlueprintType)
class DBDGAMEPLAY_API UFlashlightConeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector AIAimBeamLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator AIAimBeamRotationOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* _flashlightBottom;
    
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _baseBeamAngle;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _baseBeamLength;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> _cacheCollidingActor;
    
public:
    UFUNCTION(BlueprintPure)
    float GetOcclusionDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetEffectiveConeLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetEffectiveConeHalfAngle() const;
    
    UFlashlightConeComponent();
};

