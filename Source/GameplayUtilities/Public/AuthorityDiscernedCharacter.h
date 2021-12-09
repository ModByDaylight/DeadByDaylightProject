#pragma once
#include "CoreMinimal.h"
#include "AuthorityDiscernedCharacter.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct GAMEPLAYUTILITIES_API FAuthorityDiscernedCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ACharacter* _character;
    
    UPROPERTY(Transient)
    bool _isSighted;
    
public:
    FAuthorityDiscernedCharacter();
};

