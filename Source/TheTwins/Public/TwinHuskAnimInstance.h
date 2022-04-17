#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TwinHuskAnimInstance.generated.h"

class APawn;
class UTwinHuskStateComponent;

UCLASS(NonTransient)
class UTwinHuskAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isDeadFromSurvivorBack;
    
private:
    UPROPERTY(Transient)
    APawn* _owningPawn;
    
    UPROPERTY(Export, Transient)
    UTwinHuskStateComponent* _twinHuskStateComponent;
    
public:
    UTwinHuskAnimInstance();
};

