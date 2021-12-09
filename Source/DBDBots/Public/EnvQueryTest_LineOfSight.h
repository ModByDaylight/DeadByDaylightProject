#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_LineOfSight.generated.h"

class UEnvQueryContext;

UCLASS(MinimalAPI)
class UEnvQueryTest_LineOfSight : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> QuerierContext;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> ToContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ItemHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue Invert;
    
    UEnvQueryTest_LineOfSight();
};

