#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaOnBoardingData.generated.h"

USTRUCT()
struct FAtlantaOnBoardingData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName OnBoardingId;
    
    UPROPERTY(EditAnywhere)
    FText Title;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    DEADBYDAYLIGHT_API FAtlantaOnBoardingData();
};

