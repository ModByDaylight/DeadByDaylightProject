#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "TwinsSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UTwinsSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isRemovingTwin;
    
public:
    UTwinsSurvivorSubAnimInstance();
};

