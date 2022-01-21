#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDBloodwebDefinitionBase.h"
#include "DBDAtlantaBloodwebDefinition.generated.h"

UCLASS()
class UDBDAtlantaBloodwebDefinition : public UObject, public IDBDBloodwebDefinitionBase {
    GENERATED_BODY()
public:
    UDBDAtlantaBloodwebDefinition();
    
    // Fix for true pure virtual functions not being implemented
};

