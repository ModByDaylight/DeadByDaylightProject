#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Perception/AISenseConfig.h"
#include "Perception/AIPerceptionTypes.h"
#include "AISenseConfig_Trail.generated.h"

class UAISense_Trail;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseConfig_Trail : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NoClear)
    TSubclassOf<UAISense_Trail> Implementation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PeripheralVisionAngleDegrees;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Trail();
};

