#pragma once
#include "CoreMinimal.h"
#include "DamageData.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FDamageData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool _isRegressing;
    
    UPROPERTY(Transient)
    bool _isIntense;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ADBDPlayer> _lastDamageChangeSource;
    
public:
    DEADBYDAYLIGHT_API FDamageData();
};

