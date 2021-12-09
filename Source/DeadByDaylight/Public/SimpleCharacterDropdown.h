#pragma once
#include "CoreMinimal.h"
#include "SimpleCharacterDropdown.generated.h"

USTRUCT(BlueprintType)
struct FSimpleCharacterDropdown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 CharacterID;
    
    DEADBYDAYLIGHT_API FSimpleCharacterDropdown();
};

