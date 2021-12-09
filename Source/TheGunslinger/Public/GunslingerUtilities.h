#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GunslingerUtilities.generated.h"

class ADBDPlayer;
class AHarpoonRifle;

UCLASS(BlueprintType)
class THEGUNSLINGER_API UGunslingerUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static AHarpoonRifle* GetHarpoonRifle(ADBDPlayer* player);
    
    UGunslingerUtilities();
};

