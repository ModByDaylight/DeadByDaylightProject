#pragma once
#include "CoreMinimal.h"
#include "DiscernibleCharacter.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct GAMEPLAYUTILITIES_API FDiscernibleCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ACharacter* _character;
    
public:
    FDiscernibleCharacter();
};

