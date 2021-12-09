#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpecialEventCinematicData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventCinematicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName VideoThumbnailId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString VideoIconPath;
    
    DEADBYDAYLIGHT_API FSpecialEventCinematicData();
};

