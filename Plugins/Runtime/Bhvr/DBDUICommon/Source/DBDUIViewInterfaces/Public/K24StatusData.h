#pragma once
#include "CoreMinimal.h"
#include "K24StatusData.generated.h"

USTRUCT(BlueprintType)
struct FK24StatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsContaminated;
    
    DBDUIVIEWINTERFACES_API FK24StatusData();
};

