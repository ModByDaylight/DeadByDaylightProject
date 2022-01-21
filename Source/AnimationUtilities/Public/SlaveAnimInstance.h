#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SlaveAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class ANIMATIONUTILITIES_API USlaveAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> _masterMesh;
    
public:
    USlaveAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetMasterMesh(USkeletalMeshComponent* masterMesh);
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetMasterMesh() const;
    
};

