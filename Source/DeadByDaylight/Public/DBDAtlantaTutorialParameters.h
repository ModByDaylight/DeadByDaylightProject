#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDAtlantaTutorialParameters.generated.h"

UCLASS(BlueprintType, Transient, Config=Design)
class DEADBYDAYLIGHT_API UDBDAtlantaTutorialParameters : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    float SurvTutorial_WiggleChargeRateMultiplier;
    
    UDBDAtlantaTutorialParameters();
};

