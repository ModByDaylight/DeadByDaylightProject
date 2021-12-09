#pragma once
#include "CoreMinimal.h"
#include "AISkill_FindCollectable.h"
#include "AISkill_FindCollectable_Searchable.generated.h"

class ASearchable;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindCollectable_Searchable : public UAISkill_FindCollectable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float SearchIntervalAfterOpenSearchable;
    
    UPROPERTY(EditDefaultsOnly)
    float OpenSearchableRelevancyDuration;
    
private:
    UPROPERTY(Transient)
    ASearchable* _relevantSearchable;
    
public:
    UAISkill_FindCollectable_Searchable();
};

