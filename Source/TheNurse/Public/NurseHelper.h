#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NurseHelper.generated.h"

class ABlinkPowerItem;
class ADBDPlayer;

UCLASS(BlueprintType)
class THENURSE_API UNurseHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNurseHelper();
    UFUNCTION(BlueprintPure)
    static ABlinkPowerItem* GetBlinkPowerItem(ADBDPlayer* player);
    
};

