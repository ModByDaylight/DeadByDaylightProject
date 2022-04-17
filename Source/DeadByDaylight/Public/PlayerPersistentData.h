#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "PlayerLoadoutData.h"
#include "EProviderFlag.h"
#include "DailyRitualInstance.h"
#include "PlayerSavedProfileData.h"
#include "EPlatformFlag.h"
#include "UObject/NoExportTypes.h"
#include "PlayerPersistentData.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FPlayerPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPlayerRole GameRole;
    
    UPROPERTY(Transient)
    FPlayerLoadoutData StartingLoadout;
    
    UPROPERTY(Transient)
    FPlayerLoadoutData CurrentLoadout;
    
    UPROPERTY(Transient)
    FDailyRitualInstance CachedAvailableRitual;
    
    UPROPERTY()
    FPlayerSavedProfileData SavedData;
    
    UPROPERTY()
    EPlatformFlag PlayerPlatform;
    
    UPROPERTY()
    EProviderFlag PlayerProvider;
    
private:
    UPROPERTY(Transient)
    uint32 _playerId;
    
    UPROPERTY(Transient)
    FString _contentVersion;
    
    UPROPERTY(Transient)
    FDateTime _startSessionTime;
    
public:
    FPlayerPersistentData();
};

