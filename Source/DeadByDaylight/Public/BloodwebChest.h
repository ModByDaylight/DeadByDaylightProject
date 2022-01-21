#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EBloodchestType.h"
#include "EItemRarity.h"
#include "BloodwebChest.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebChest : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBloodchestType ChestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> GivenItemRarity;
    
    DEADBYDAYLIGHT_API FBloodwebChest();
};

