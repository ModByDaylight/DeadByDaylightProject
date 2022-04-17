#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MovementUtilities.generated.h"

class AActor;

UCLASS(BlueprintType)
class GAMEPLAYUTILITIES_API UMovementUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovementUtilities();
    UFUNCTION(BlueprintCallable)
    static void Local_MoveActorTo(AActor* actor, const FVector& location, const FRotator& rotation, const float duration);
    
};

