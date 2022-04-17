#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseSurvivorAnimInstance.h"
#include "MeshRotationCorrectionSubAnimInstance.generated.h"

class UCharacterMovementComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UMeshRotationCorrectionSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _rotationInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isCrawling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator _toSlopeRotation;
    
private:
    UPROPERTY(Export, Transient)
    UCharacterMovementComponent* _movementComponent;
    
public:
    UMeshRotationCorrectionSubAnimInstance();
};

