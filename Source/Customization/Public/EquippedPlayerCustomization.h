#pragma once
#include "CoreMinimal.h"
#include "CharmIdSlot.h"
#include "EquippedPlayerCustomization.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMIZATION_API FEquippedPlayerCustomization {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FName> _customizationItemIds;
    
    UPROPERTY()
    TArray<FCharmIdSlot> _customizationCharms;
    
public:
    FEquippedPlayerCustomization();
};

