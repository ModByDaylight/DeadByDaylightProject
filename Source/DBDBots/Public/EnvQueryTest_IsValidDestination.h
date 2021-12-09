#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_IsValidDestination.generated.h"

class UEnvQueryContext;

UCLASS(MinimalAPI)
class UEnvQueryTest_IsValidDestination : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> QuerierContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue Invert;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue ExcludeEscapeZoneIfReverseBearTrapIsActivated;
    
    UEnvQueryTest_IsValidDestination();
};

