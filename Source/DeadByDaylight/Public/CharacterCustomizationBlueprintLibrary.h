#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CharacterCustomizationBlueprintLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCharacterCustomizationBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharacterCustomizationBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static FName GetOutfitEquippedByLocalPlayer(const UObject* worldContextObject);
    
};

