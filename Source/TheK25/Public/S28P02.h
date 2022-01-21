#pragma once
#include "CoreMinimal.h"
#include "BoonPerk.h"
#include "S28P02.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US28P02 : public UBoonPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _healingSpeedGainPercentage[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _canSelfHeal;
    
    UPROPERTY(EditDefaultsOnly)
    float _selfHealSpeedPenalty[3];
    
public:
    US28P02();
};

