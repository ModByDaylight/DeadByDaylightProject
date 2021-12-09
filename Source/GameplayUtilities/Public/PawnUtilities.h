#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PawnUtilities.generated.h"

class AActor;
class APawn;
class UObject;

UCLASS(BlueprintType)
class GAMEPLAYUTILITIES_API UPawnUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static APawn* GetOwningPawn(const AActor* origin);
    
    UFUNCTION(BlueprintPure)
    static APawn* GetLocallyObservedPawn(const UObject* worldContext);
    
    UPawnUtilities();
};

