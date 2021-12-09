#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "TwinBaseAddon.generated.h"

class AConjoinedTwin;

UCLASS()
class UTwinBaseAddon : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName _statusEffectID;
    
    UPROPERTY(EditDefaultsOnly)
    float _customParam;
    
    UFUNCTION()
    void Authority_OnTwinSet(AConjoinedTwin* twin);
    
public:
    UTwinBaseAddon();
};

