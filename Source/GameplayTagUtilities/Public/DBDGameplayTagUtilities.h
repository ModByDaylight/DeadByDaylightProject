#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDGameplayTagUtilities.generated.h"

UCLASS(BlueprintType)
class GAMEPLAYTAGUTILITIES_API UDBDGameplayTagUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDGameplayTagUtilities();
    UFUNCTION(BlueprintCallable)
    static FName GetScoreModifierName(FName scoreEventID);
    
    UFUNCTION(BlueprintCallable)
    static bool GameplayTagExists(FName tagName);
    
};

