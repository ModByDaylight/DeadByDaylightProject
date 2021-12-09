#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalletOutlineUpdateStrategy.h"
#include "DreamPalletOutlineUpdateStrategy.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UDreamPalletOutlineUpdateStrategy : public UPalletOutlineUpdateStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _revealedByMapColor;
    
    UFUNCTION()
    void InitializeTunableValues(ASlasherPlayer* killer);
    
public:
    UDreamPalletOutlineUpdateStrategy();
};

