#pragma once
#include "CoreMinimal.h"
#include "PartyMemberUIData.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberUIData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool _isLocalPlayer;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool _isReady;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FString _mirrorId;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FString _playerName;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    int32 _playerId;
    
public:
    DEADBYDAYLIGHT_API FPartyMemberUIData();
};

