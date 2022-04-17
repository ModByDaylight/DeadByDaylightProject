#pragma once
#include "CoreMinimal.h"
#include "EGameState.h"
#include "PlayerStateData.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FPlayerStateData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 CharacterLevel;
    
    UPROPERTY()
    FName EquipedFavorId;
    
    UPROPERTY()
    TArray<FName> EquipedPerkIds;
    
    UPROPERTY()
    TArray<int32> EquipedPerkLevels;
    
private:
    UPROPERTY()
    EGameState _playerGameState;
    
    UPROPERTY()
    bool _isEscapeHatch;
    
    UPROPERTY()
    int32 _prestigeLevel;
    
public:
    FPlayerStateData();
};

