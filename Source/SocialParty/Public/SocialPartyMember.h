#pragma once
#include "CoreMinimal.h"
#include "EPartyPostMatchmakingRole.h"
#include "EPartyPostMatchmakingState.h"
#include "SocialPartyMember.generated.h"

USTRUCT()
struct SOCIALPARTY_API FSocialPartyMember {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FName> _customizationMesh;
    
    UPROPERTY()
    FString _playerName;
    
    UPROPERTY()
    FString _platformSessionId;
    
    UPROPERTY()
    FString _uniquePlayerId;
    
    UPROPERTY()
    int32 _playerRank;
    
    UPROPERTY()
    int32 _characterLevel;
    
    UPROPERTY()
    int32 _prestigeLevel;
    
    UPROPERTY()
    int32 _gameRole;
    
    UPROPERTY()
    int32 _characterId;
    
    UPROPERTY()
    FName _powerId;
    
    UPROPERTY()
    int32 _location;
    
    UPROPERTY()
    bool _ready;
    
    UPROPERTY()
    bool _crossplayAllowed;
    
    UPROPERTY()
    FString _playerPlatform;
    
    UPROPERTY()
    FString _playerProvider;
    
    UPROPERTY()
    EPartyPostMatchmakingRole _postMatchmakingRole;
    
    UPROPERTY()
    EPartyPostMatchmakingState _postMatchmakingState;
    
    UPROPERTY()
    uint8 _roleRequested;
    
    UPROPERTY()
    bool _isStateInitialized;
    
    UPROPERTY()
    int64 _disconnectionPenaltyEndOfBan;
    
public:
    FSocialPartyMember();
};

