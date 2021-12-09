#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Perception/AISenseConfig.h"
#include "AISenseConfig_PointOfInterest.generated.h"

class UAISense_PointOfInterest;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseConfig_PointOfInterest : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NoClear)
    TSubclassOf<UAISense_PointOfInterest> Implementation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinGeneratorRepairSoundRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxGeneratorRepairSoundRange;
    
    UAISenseConfig_PointOfInterest();
};

