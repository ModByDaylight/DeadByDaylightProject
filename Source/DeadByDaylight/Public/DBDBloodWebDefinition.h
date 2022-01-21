#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDBloodwebDefinitionBase.h"
#include "DBDBloodWebDefinition.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDBloodWebDefinition : public UObject, public IDBDBloodwebDefinitionBase {
    GENERATED_BODY()
public:
    UDBDBloodWebDefinition();
    
    // Fix for true pure virtual functions not being implemented
};

