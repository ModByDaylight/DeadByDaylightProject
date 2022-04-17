#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EPlayerRole.h"
#include "ItemAvailability.h"
#include "EItemRarity.h"
#include "ItemUIData.h"
#include "CustomizationData.generated.h"

USTRUCT()
struct FCustomizationData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    int32 AssociatedCharacter;
    
    UPROPERTY(EditAnywhere)
    EPlayerRole AssociatedRole;
    
    UPROPERTY(EditAnywhere)
    EItemRarity Rarity;
    
    UPROPERTY(EditAnywhere)
    FItemUIData UIData;
    
    UPROPERTY(EditAnywhere)
    FItemAvailability Availability;
    
    UPROPERTY(EditAnywhere)
    FString InclusionVersion;
    
    DEADBYDAYLIGHT_API FCustomizationData();
};

