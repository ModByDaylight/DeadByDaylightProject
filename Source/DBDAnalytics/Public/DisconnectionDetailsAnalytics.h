#pragma once
#include "CoreMinimal.h"
#include "EGameState.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "EHatchStatus.h"
#include "EHealthStatus.h"
#include "EDoorStatus.h"
#include "ECharacterStatus.h"
#include "DisconnectionDetailsAnalytics.generated.h"

USTRUCT()
struct FDisconnectionDetailsAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PlayerPlatform;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 InGameTime;
    
    UPROPERTY()
    EPlayerRole Role;
    
    UPROPERTY()
    FString Reason;
    
    UPROPERTY()
    EHealthStatus Health;
    
    UPROPERTY()
    TArray<ECharacterStatus> CharacterStatus;
    
    UPROPERTY()
    int32 GeneratorActivated;
    
    UPROPERTY()
    EHatchStatus HatchStatus;
    
    UPROPERTY()
    EDoorStatus DoorStatus;
    
    UPROPERTY()
    EGameState DisconnectionType;
    
    DBDANALYTICS_API FDisconnectionDetailsAnalytics();
};

