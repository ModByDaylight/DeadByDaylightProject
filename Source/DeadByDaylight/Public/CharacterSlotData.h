#pragma once
#include "CoreMinimal.h"
#include "AtlantaFreeTicketAffectedUIData.h"
#include "ECharacterDifficulty.h"
#include "PurchaseCurrencyData.h"
#include "SpecialEventUIInfo.h"
#include "EPlayerRole.h"
#include "CharacterSlotData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FName Id;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CharacterIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString IconFilePath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString BackgroundImagePath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Biography;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString DLCId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString DLCTitle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Prestige;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECharacterDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsUnlocked;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsDLCPurchasable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FPurchaseCurrencyData> PurchaseDataList;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 ItemsOwned;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 TotalItems;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ShowNew;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsDlcLockedKiller;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSpecialEventUIInfo EventInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool HasNonSelectedPerks;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FAtlantaFreeTicketAffectedUIData FreeTicketAffectedData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPlayerRole PlayerRole;
    
    DEADBYDAYLIGHT_API FCharacterSlotData();
};

