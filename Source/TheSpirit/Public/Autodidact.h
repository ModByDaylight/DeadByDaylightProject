#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Autodidact.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAutodidact : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 _maxTokenCountPerLevel[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _progressionBonusPerToken;
    
    UPROPERTY(EditDefaultsOnly)
    float _initialSkillCheckProgressionPenalty;
    
public:
    UAutodidact();
};

