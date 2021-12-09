#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaFreeTicketAffectedUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaFreeTicketAffectedUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString InEffectBGFilePath;
    
    UPROPERTY(BlueprintReadOnly)
    FName Id;
    
    UPROPERTY()
    FDateTime EndDate;
    
    UPROPERTY()
    bool HasFreeTicketToUse;
    
    DEADBYDAYLIGHT_API FAtlantaFreeTicketAffectedUIData();
};

