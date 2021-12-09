#pragma once
#include "CoreMinimal.h"
#include "PartySessionSettings.generated.h"

USTRUCT(BlueprintType)
struct SOCIALPARTY_API FPartySessionSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString _sessionId;
    
    UPROPERTY()
    TMap<FString, FString> _gameSessionInfos;
    
    UPROPERTY()
    FString _owningUserId;
    
    UPROPERTY()
    FString _owningUserName;
    
    UPROPERTY()
    bool _isDedicated;
    
    UPROPERTY()
    int64 _matchmakingTimestamp;
    
public:
    FPartySessionSettings();
};

