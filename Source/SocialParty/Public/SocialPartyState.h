#pragma once
#include "CoreMinimal.h"
#include "CustomGamePresetData.h"
#include "PartySessionSettings.h"
#include "PartyMatchmakingSettings.h"
#include "SocialPartyState.generated.h"

USTRUCT()
struct SOCIALPARTY_API FSocialPartyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FCustomGamePresetData _customGamePresetData;
    
    UPROPERTY()
    FPartySessionSettings _partySessionSettings;
    
    UPROPERTY()
    FPartyMatchmakingSettings _partyMatchmakingSettings;
    
    UPROPERTY()
    TArray<FName> _playerJoinOrder;
    
    UPROPERTY()
    TMap<FName, uint8> _playerChatIndices;
    
    UPROPERTY()
    int32 _gameType;
    
    UPROPERTY()
    bool _isCrowdPlay;
    
    UPROPERTY()
    bool _isUsingDedicatedServer;
    
    UPROPERTY()
    FString _version;
    
    UPROPERTY()
    int32 _lastUpdatedTime;
    
    UPROPERTY()
    int32 _lastSentTime;
    
public:
    FSocialPartyState();
};

