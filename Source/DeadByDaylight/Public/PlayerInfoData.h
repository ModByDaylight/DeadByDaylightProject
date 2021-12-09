#pragma once
#include "CoreMinimal.h"
#include "PlayerInfoData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FString CharacterName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString CharacterIconPath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CharacterLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 PrestigeLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool CanPrestige;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 PlayerLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 DevotionLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 PlayerRank;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 ActivePips;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 NumPipsToNextRank;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Ready;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsSlasher;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ShowPortraitBorder;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool HasActiveSubscription;
    
    DEADBYDAYLIGHT_API FPlayerInfoData();
};

