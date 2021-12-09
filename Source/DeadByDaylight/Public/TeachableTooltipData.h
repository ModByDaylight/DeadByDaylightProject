#pragma once
#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "EItemRarity.h"
#include "EInventoryItemType.h"
#include "ETeachableStatus.h"
#include "TeachableTooltipData.generated.h"

USTRUCT()
struct FTeachableTooltipData : public FBaseTooltipData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EItemRarity ItemRarity;
    
    UPROPERTY(Transient)
    EInventoryItemType ItemType;
    
    UPROPERTY(Transient)
    FString CharacterName;
    
    UPROPERTY(Transient)
    FString AvailabilityMessage;
    
    UPROPERTY(Transient)
    FString EffectMessage;
    
    UPROPERTY(Transient)
    bool UseInCharacterSelectionScreen;
    
    UPROPERTY(Transient)
    ETeachableStatus TeachableStatus;
    
    DEADBYDAYLIGHT_API FTeachableTooltipData();
};

