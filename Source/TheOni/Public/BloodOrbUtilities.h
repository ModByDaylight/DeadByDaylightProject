#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BloodOrbUtilities.generated.h"

class ABloodOrb;
class UObject;

UCLASS(BlueprintType)
class THEONI_API UBloodOrbUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBloodOrbUtilities();
    UFUNCTION(BlueprintPure)
    static TArray<ABloodOrb*> GetAllBloodOrbs(const UObject* worldContextObject);
    
};

