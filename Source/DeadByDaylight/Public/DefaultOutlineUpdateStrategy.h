#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DefaultOutlineUpdateStrategy.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDefaultOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _revealedColorToSurvivor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _revealedColorToKiller;
    
public:
    UDefaultOutlineUpdateStrategy();
};

