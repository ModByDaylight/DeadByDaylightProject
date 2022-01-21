#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "MindBreaker.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UMindBreaker : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _effectDurationAfterRepair[3];
    
public:
    UMindBreaker();
};

