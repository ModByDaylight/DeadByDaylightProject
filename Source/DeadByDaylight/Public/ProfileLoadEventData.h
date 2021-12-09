#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProfileLoadEventData.generated.h"

USTRUCT()
struct FProfileLoadEventData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool FirstTimePlaying;
    
    UPROPERTY(Transient)
    FDateTime Timestamp;
    
    DEADBYDAYLIGHT_API FProfileLoadEventData();
};

