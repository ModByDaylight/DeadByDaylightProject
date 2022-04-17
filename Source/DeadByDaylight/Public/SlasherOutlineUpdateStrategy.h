#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "OnRevealedDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "SlasherOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlasherOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnRevealedDelegate OnRevealed;
    
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

