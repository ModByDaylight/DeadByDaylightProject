#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Perception/AISenseConfig.h"
#include "EAITerrorLevel.h"
#include "Perception/AIPerceptionTypes.h"
#include "AISenseConfig_Terror.generated.h"

class UAISense_Terror;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseConfig_Terror : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NoClear)
    TSubclassOf<UAISense_Terror> Implementation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxBreathingSoundRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EAITerrorLevel, float> TerrorRanges;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Terror();
};

