#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ChestAnimInstance.generated.h"

class ASearchable;
class UInteractionDefinition;

UCLASS(NonTransient)
class DBDANIMATION_API UChestAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ASearchable* _owningChest;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isOpen;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isBeingPriedOpen;
    
private:
    UPROPERTY(Export, Transient)
    UInteractionDefinition* _openChestInteraction;
    
public:
    UChestAnimInstance();
private:
    UFUNCTION()
    void OnSearchedChanged(bool searched);
    
};

