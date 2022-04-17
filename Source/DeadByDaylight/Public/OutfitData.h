#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ItemUIData.h"
#include "ItemAvailability.h"
#include "OutfitData.generated.h"

USTRUCT()
struct DEADBYDAYLIGHT_API FOutfitData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    FItemUIData UIData;
    
    UPROPERTY(EditAnywhere)
    FItemAvailability Availability;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> OutfitItems;
    
    UPROPERTY(EditAnywhere)
    FText CollectionName;
    
    UPROPERTY(EditAnywhere)
    FText CollectionDescription;
    
    UPROPERTY(EditAnywhere)
    FString InclusionVersion;
    
    UPROPERTY(EditAnywhere)
    bool IsAvailableInAtlantaBuild;
    
    FOutfitData();
};

