#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "ECharacterMovementTypes.h"
#include "AIMoveToInteractData.generated.h"

class AActor;

UCLASS(BlueprintType)
class UAIMoveToInteractData : public UAICharacterBehaviourData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    AActor* _interactActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    AActor* _targetPositionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ECharacterMovementTypes _characterMovementTypes;
    
public:
    UAIMoveToInteractData();
    UFUNCTION(BlueprintCallable)
    void Init(AActor* interactActor, ECharacterMovementTypes characterMovementTypes, AActor* targetPositionActor);
    
};

