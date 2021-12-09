#pragma once
#include "CoreMinimal.h"
#include "ItemData.h"
#include "ParentItemIDs.h"
#include "ItemAddonProperties.generated.h"

class UItemAddon;

USTRUCT(BlueprintType)
struct FItemAddonProperties : public FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UItemAddon> ItemAddonBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FParentItemIDs ParentItem;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PreLevelGenerationModifierID;
    
    DEADBYDAYLIGHT_API FItemAddonProperties();
};

