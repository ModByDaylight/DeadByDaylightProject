#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "OpenChestSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UOpenChestSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInteractingWithChest;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGameplayTag _interactionPhase;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInteractingWithOpenChest;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector _snapPosition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isVomiting;
    
public:
    UOpenChestSurvivorSubAnimInstance();
};

