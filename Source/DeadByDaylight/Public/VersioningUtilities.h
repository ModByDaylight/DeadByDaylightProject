#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VersioningUtilities.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UVersioningUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVersioningUtilities();
    UFUNCTION(BlueprintPure)
    static bool IsVisualRework();
    
};

