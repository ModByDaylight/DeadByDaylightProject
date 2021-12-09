#pragma once
#include "CoreMinimal.h"
#include "CustomGameBotsData.h"
#include "CustomGamePresetData.generated.h"

USTRUCT(BlueprintType)
struct SOCIALPARTY_API FCustomGamePresetData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<uint8> _mapAvailabilities;
    
    UPROPERTY()
    bool _arePerkAvailable;
    
    UPROPERTY()
    bool _areOfferingAvailable;
    
    UPROPERTY()
    bool _areItemAvailable;
    
    UPROPERTY()
    bool _areItemAddonAvailable;
    
    UPROPERTY()
    bool _areDlcContentAllowed;
    
    UPROPERTY()
    bool _isPrivateMatch;
    
    UPROPERTY()
    FCustomGameBotsData _botsData;
    
public:
    FCustomGamePresetData();
};

