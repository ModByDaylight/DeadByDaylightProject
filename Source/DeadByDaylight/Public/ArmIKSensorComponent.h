#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EArm.h"
#include "ArmIKSensorDatum.h"
#include "ArmIKSensorComponent.generated.h"

class USkeletalMeshComponent;
class UCameraComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UArmIKSensorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* _mesh;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TMap<EArm, FArmIKSensorDatum> _arms;
    
private:
    UPROPERTY(EditAnywhere)
    float _capsuleRadius;
    
    UPROPERTY(EditAnywhere)
    float _capsuleHalfHeight;
    
    UPROPERTY(EditAnywhere)
    float _traceLength;
    
    UPROPERTY(Export, Transient)
    UCameraComponent* _owningCamera;
    
public:
    UArmIKSensorComponent();
};

