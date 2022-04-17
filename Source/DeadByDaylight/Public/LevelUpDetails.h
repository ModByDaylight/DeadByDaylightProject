#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EInventoryItemType.h"
#include "LevelUpDetails.generated.h"

USTRUCT(BlueprintType)
struct FLevelUpDetails : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Prestige;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInventoryItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AssociatedCharacter;
    
    DEADBYDAYLIGHT_API FLevelUpDetails();
};

