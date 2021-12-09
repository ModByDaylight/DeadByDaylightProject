#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebContentTypePerRingDistribution.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebContentTypePerRingDistribution : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerkPerRingMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerkPerRingMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerkPerRingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OfferingPerRingMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OfferingPerRingMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OfferingPerRingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemPerRingMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemPerRingMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemPerRingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AddOnPerRingMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AddOnPerRingMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AddOnPerRingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChestPerRingMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChestPerRingMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChestPerRingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerksPackPerRingMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerksPackPerRingMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerksPackPerRingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IridiscentShardsPackPerRingMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IridiscentShardsPackPerRingMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IridiscentShardsPackPerRingWeight;
    
    DEADBYDAYLIGHT_API FBloodwebContentTypePerRingDistribution();
};

