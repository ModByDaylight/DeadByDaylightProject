#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "NodeContentDistributionValue.generated.h"

USTRUCT(BlueprintType)
struct FNodeContentDistributionValue : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Empty_Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Empty_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Empty_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Perks_Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Perks_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Perks_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerksPacks_Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerksPacks_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerksPacks_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Offerings_Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Offerings_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Offerings_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Items_Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Items_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Items_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AddOn_Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AddOn_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AddOn_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Chests_Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Chests_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Chests_MaxCount;
    
    DEADBYDAYLIGHT_API FNodeContentDistributionValue();
};

