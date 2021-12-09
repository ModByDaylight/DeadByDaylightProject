#pragma once
#include "CoreMinimal.h"
#include "CharmIdSlot.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMIZATION_API FCharmIdSlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int8 SlotIndex;
    
    UPROPERTY(EditAnywhere)
    FName CharmId;
    
    FCharmIdSlot();
};

