#pragma once
#include "CoreMinimal.h"
#include "EDirection.h"
#include "SectionLenghtsProperties.generated.h"

USTRUCT(BlueprintType)
struct FSectionLenghtsProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Lenght;
    
    DEADBYDAYLIGHT_API FSectionLenghtsProperties();
};

