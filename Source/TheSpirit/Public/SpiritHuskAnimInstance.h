#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SpiritHuskAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class USpiritHuskAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USkeletalMeshComponent* _killerMesh;
    
public:
    USpiritHuskAnimInstance();
};

