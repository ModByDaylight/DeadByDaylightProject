#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VersioningUtilities.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UVersioningUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static bool IsVisualRework();
    
    UVersioningUtilities();
};

