#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OutlineColourConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FOutlineColourConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor ColourValue;
    
    DEADBYDAYLIGHT_API FOutlineColourConfiguration();
};

