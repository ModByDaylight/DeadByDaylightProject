#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OutlineReveal.generated.h"

class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API UOutlineReveal : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _affectedCharacters;
    
public:
    UOutlineReveal();
};

