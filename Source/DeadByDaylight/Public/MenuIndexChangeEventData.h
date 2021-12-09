#pragma once
#include "CoreMinimal.h"
#include "MenuIndexChangeEventData.generated.h"

USTRUCT()
struct FMenuIndexChangeEventData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 Index;
    
    DEADBYDAYLIGHT_API FMenuIndexChangeEventData();
};

