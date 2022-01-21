#pragma once
#include "CoreMinimal.h"
#include "BaseLacerationLevelCondition.h"
#include "LacerationLevelCondition.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class THEK23_API ULacerationLevelCondition : public UBaseLacerationLevelCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _lacerationLevelRequired;
    
public:
    ULacerationLevelCondition();
};

