#pragma once
#include "CoreMinimal.h"
#include "SimpleCharacterDropdown.h"
#include "CharacterCameraTag.generated.h"

class ACameraActor;

USTRUCT(BlueprintType)
struct FCharacterCameraTag {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ACameraActor* Camera;
    
    UPROPERTY(EditAnywhere)
    TArray<FSimpleCharacterDropdown> Characters;
    
    DEADBYDAYLIGHT_API FCharacterCameraTag();
};

