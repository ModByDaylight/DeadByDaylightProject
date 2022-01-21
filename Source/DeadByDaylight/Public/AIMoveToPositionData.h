#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "ECharacterMovementTypes.h"
#include "AIMoveToPositionData.generated.h"

class AActor;

UCLASS(BlueprintType)
class UAIMoveToPositionData : public UAICharacterBehaviourData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    AActor* _positionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ECharacterMovementTypes _movementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool _usePathfinding;
    
public:
    UAIMoveToPositionData();
    UFUNCTION(BlueprintCallable)
    void Init(AActor* positionActor, ECharacterMovementTypes movementType, bool usePathfinding);
    
};

