#include "EnvQueryTest_LineOfSight.h"
#include "EnvQueryContext_PinActor.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_LineOfSight::UEnvQueryTest_LineOfSight() {
    this->QuerierContext = UEnvQueryContext_Querier::StaticClass();
    this->ToContext = UEnvQueryContext_PinActor::StaticClass();
}

