#include "EnvQueryTest_LineOfSight.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvQueryContext_PinActor.h"

UEnvQueryTest_LineOfSight::UEnvQueryTest_LineOfSight() {
    this->QuerierContext = UEnvQueryContext_Querier::StaticClass();
    this->ToContext = UEnvQueryContext_PinActor::StaticClass();
}

