#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingState.h"
#include "PartyMatchmakingSettings.generated.h"

USTRUCT(BlueprintType)
struct SOCIALPARTY_API FPartyMatchmakingSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FString> _playerIds;
    
    UPROPERTY()
    EMatchmakingState _matchmakingState;
    
    UPROPERTY()
    int64 _startMatchmakingDateTimestamp;
    
    UPROPERTY()
    bool _isInFinalCountdown;
    
public:
    FPartyMatchmakingSettings();
};

