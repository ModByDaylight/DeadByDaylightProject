#pragma once
#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "LockerOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULockerOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy {
    GENERATED_BODY()
public:
    ULockerOutlineUpdateStrategy();
    UFUNCTION(BlueprintPure)
    FLinearColor GetRedColor() const;
    
};

