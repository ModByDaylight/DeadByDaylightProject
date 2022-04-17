#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EInventoryItemType.h"
#include "ItemUIData.h"
#include "BaseItemData.generated.h"

class UDBDPrimaryDataAsset;
class AActor;

USTRUCT()
struct FBaseItemData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    EInventoryItemType Type;
    
    UPROPERTY(EditAnywhere)
    FItemUIData UIData;
    
    UPROPERTY(EditAnywhere)
    FText GenericDisplayName;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> ItemBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDBDPrimaryDataAsset> AssetData;
    
    DEADBYDAYLIGHT_API FBaseItemData();
};

