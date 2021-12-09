#pragma once
#include "CoreMinimal.h"
#include "PlayerStateData.h"
#include "CharmIdSlot.h"
#include "PlayerDataSync.generated.h"

USTRUCT(BlueprintType)
struct FPlayerDataSync {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPlayerStateData PlayerData;
    
    UPROPERTY()
    TArray<FName> CustomizationMesh;
    
    UPROPERTY()
    TArray<FCharmIdSlot> CustomizationCharms;
    
    UPROPERTY()
    FName EquipedItemId;
    
    UPROPERTY()
    TArray<FName> EquipedItemAddonIds;
    
    DEADBYDAYLIGHT_API FPlayerDataSync();
};

