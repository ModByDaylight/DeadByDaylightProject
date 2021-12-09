#pragma once
#include "CoreMinimal.h"
#include "K26StatusData.generated.h"

USTRUCT(BlueprintType)
struct FK26StatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCrowAttached;
    
    DBDUIVIEWINTERFACES_API FK26StatusData();
};

