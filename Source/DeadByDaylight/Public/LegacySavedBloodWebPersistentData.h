#pragma once
#include "CoreMinimal.h"
#include "LegacySavedBloodWebRingPersistentData.h"
#include "UObject/NoExportTypes.h"
#include "LegacySavedBloodWebPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FLegacySavedBloodWebPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(NoClear, SaveGame)
    int32 VersionNumber;
    
    UPROPERTY(SaveGame)
    int32 Level;
    
    UPROPERTY(SaveGame)
    TArray<FLegacySavedBloodWebRingPersistentData> RingData;
    
    UPROPERTY(SaveGame)
    TArray<FName> Paths;
    
    UPROPERTY(SaveGame)
    FString EntityCurrentNode;
    
    UPROPERTY(SaveGame)
    FDateTime GenerationDate;
    
    DEADBYDAYLIGHT_API FLegacySavedBloodWebPersistentData();
};

