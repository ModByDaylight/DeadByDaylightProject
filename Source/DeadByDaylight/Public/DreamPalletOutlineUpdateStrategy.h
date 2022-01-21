#pragma once
#include "CoreMinimal.h"
#include "PalletOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DreamPalletOutlineUpdateStrategy.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDreamPalletOutlineUpdateStrategy : public UPalletOutlineUpdateStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _revealedByMapColor;
    
public:
    UDreamPalletOutlineUpdateStrategy();
protected:
    UFUNCTION()
    void InitializeTunableValues(ASlasherPlayer* killer);
    
};

