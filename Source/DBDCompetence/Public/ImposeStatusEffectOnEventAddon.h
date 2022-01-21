#pragma once
#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "EImposeEffectTo.h"
#include "ImposeStatusEffectOnEventAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UImposeStatusEffectOnEventAddon : public UOnEventBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _statusEffectTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName _statusEffectName;
    
    UPROPERTY(EditDefaultsOnly)
    EImposeEffectTo _imposeEffectTo;
    
public:
    UImposeStatusEffectOnEventAddon();
};

