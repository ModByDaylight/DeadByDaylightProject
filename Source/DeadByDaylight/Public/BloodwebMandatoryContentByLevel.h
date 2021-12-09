#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebMandatoryContentByLevel.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebMandatoryContentByLevel : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ForcedItem01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ForcedItem02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ForcedItem03;
    
    DEADBYDAYLIGHT_API FBloodwebMandatoryContentByLevel();
};

