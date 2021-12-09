#pragma once
#include "CoreMinimal.h"
#include "ECharacterDifficulty.h"
#include "CharacterTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FCharacterTooltipViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText Biography;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText DLCTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 Prestige;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsNewInStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsAvailableInStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsDLCPurchasable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ECharacterDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText CharacterDisabledMessage;
    
    FCharacterTooltipViewData();
};

