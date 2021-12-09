#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "SlasherOutlineUpdateStrategy.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSlasherOutlineUpdateStrategyOnRevealed);

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API USlasherOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSlasherOutlineUpdateStrategyOnRevealed OnRevealed;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _nonRevealedColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _revealedColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _revealedColorForKiller;
    
public:
    USlasherOutlineUpdateStrategy();
};

