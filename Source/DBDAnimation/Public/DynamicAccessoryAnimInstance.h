#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DynamicAccessoryAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UDynamicAccessoryAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInMenu;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInGame;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> _masterMesh;
    
public:
    UDynamicAccessoryAnimInstance();
};

