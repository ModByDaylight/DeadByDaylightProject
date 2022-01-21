#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GunslingerUtilities.generated.h"

class AHarpoonRifle;
class ADBDPlayer;

UCLASS(BlueprintType)
class THEGUNSLINGER_API UGunslingerUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGunslingerUtilities();
    UFUNCTION(BlueprintPure)
    static AHarpoonRifle* GetHarpoonRifle(ADBDPlayer* player);
    
};

