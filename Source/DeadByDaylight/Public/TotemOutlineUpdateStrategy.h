#pragma once
#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "TotemOutlineUpdateStrategy.generated.h"

class UCurveLinearColor;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UTotemOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _revealedColorToSurvivor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _boonTotemRevealedColorToSurvivor;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveLinearColor* _revealedColorToKiller;
    
public:
    UFUNCTION()
    FLinearColor GetRevealColorToSurvivor() const;
    
    UTotemOutlineUpdateStrategy();
};

