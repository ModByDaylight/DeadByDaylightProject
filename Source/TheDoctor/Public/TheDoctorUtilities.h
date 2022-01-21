#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TheDoctorUtilities.generated.h"

class USurvivorMadnessEffect;
class ADBDPlayer;

UCLASS(BlueprintType)
class UTheDoctorUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTheDoctorUtilities();
    UFUNCTION(BlueprintPure)
    static bool IsTotallyInsane(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    static USurvivorMadnessEffect* GetSurvivorMadnessEffect(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMadnessTier(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    static bool CanGainInsanity(const ADBDPlayer* player);
    
};

