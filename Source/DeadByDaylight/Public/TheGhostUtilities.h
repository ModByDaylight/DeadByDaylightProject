#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TheGhostUtilities.generated.h"

class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UTheGhostUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTheGhostUtilities();
    UFUNCTION(BlueprintPure)
    static bool IsKillerStealth(AActor* killer);
    
};

