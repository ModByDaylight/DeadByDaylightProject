#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BlockElement.generated.h"

class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API UBlockElement : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> _source;
    
    UPROPERTY(Transient)
    TSet<TWeakObjectPtr<ADBDPlayer>> _affectedPlayers;
    
public:
    UBlockElement();
};

