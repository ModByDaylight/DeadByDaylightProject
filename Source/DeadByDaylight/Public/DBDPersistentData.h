#pragma once
#include "CoreMinimal.h"
#include "CloudInventoryItem.h"
#include "UObject/Object.h"
#include "GamePersistentData.h"
#include "PlayerPersistentData.h"
#include "DBDPersistentData.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDPersistentData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FGamePersistentData _gamePersistentData;
    
    UPROPERTY(Transient)
    TArray<FString> _keepDataIDs;
    
    UPROPERTY(Transient)
    TMap<FString, FPlayerPersistentData> _playerIdToPersistentDataMap;
    
    UPROPERTY(Transient)
    FPlayerPersistentData _localPlayerPersistentData;
    
    UPROPERTY(Transient)
    TArray<FCloudInventoryItem> _cloudInventory;
    
public:
    UDBDPersistentData();
};

