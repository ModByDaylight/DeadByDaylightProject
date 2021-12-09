#pragma once
#include "CoreMinimal.h"
#include "EGameplayMode.h"
#include "GameBotsData.h"
#include "GamePresetData.generated.h"

USTRUCT(BlueprintType)
struct FGamePresetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<uint8> _mapAvailabilities;
    
    UPROPERTY()
    TArray<uint8> _perkAvailabilities;
    
    UPROPERTY()
    TArray<uint8> _offeringAvailabilities;
    
    UPROPERTY()
    TArray<uint8> _itemAvailabilities;
    
    UPROPERTY()
    TArray<uint8> _itemAddonAvailabilities;
    
    UPROPERTY()
    TArray<uint8> _customizationItemAvailabilities;
    
    UPROPERTY()
    TArray<uint8> _characterAvailabilities;
    
    UPROPERTY()
    bool _allowDlcContent;
    
    UPROPERTY()
    bool _privateMatch;
    
    UPROPERTY()
    EGameplayMode _gameplayMode;
    
    UPROPERTY()
    FGameBotsData _botsData;
    
public:
    DEADBYDAYLIGHT_API FGamePresetData();
};

