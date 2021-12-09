#pragma once
#include "CoreMinimal.h"
#include "CharacterAnimationDropdown.h"
#include "CharacterAnimation.generated.h"

USTRUCT(BlueprintType)
struct FCharacterAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Label;
    
    UPROPERTY(EditAnywhere)
    FCharacterAnimationDropdown Data;
    
    DEADBYDAYLIGHT_API FCharacterAnimation();
};

