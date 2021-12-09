#pragma once
#include "CoreMinimal.h"
#include "TricksterStatusData.generated.h"

USTRUCT(BlueprintType)
struct FTricksterStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentLacerationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumLacerationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDangerousLacerationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool WasRecentlyDamagedByLaceration;
    
    DBDUIVIEWINTERFACES_API FTricksterStatusData();
};

