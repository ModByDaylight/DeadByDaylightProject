#pragma once
#include "CoreMinimal.h"
#include "VaultableOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "PalletOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPalletOutlineUpdateStrategy : public UVaultableOutlineUpdateStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _revealedByPowerColor;
    
public:
    UPalletOutlineUpdateStrategy();
};

