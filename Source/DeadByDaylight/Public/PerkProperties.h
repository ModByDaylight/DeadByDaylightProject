#pragma once
#include "CoreMinimal.h"
#include "ItemData.h"
#include "OfferingEffect.h"
#include "EPerkCategory.h"
#include "EItemRarity.h"
#include "PerkLevelText.h"
#include "PerkProperties.generated.h"

class UPerk;

USTRUCT(BlueprintType)
struct FPerkProperties : public FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FOfferingEffect> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AssociatedPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MandatoryOnBloodweblevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TeachableOnBloodweblevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AtlantaTeachableLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EPerkCategory> PerkCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UPerk> PerkBlueprint;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<EItemRarity> PerkLevelRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPerkLevelText> PerkLevelTunables;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    FText PerkLevel1Description;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    FText PerkLevel2Description;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    FText PerkLevel3Description;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> AtlantaActivatableInteractionIDs;
    
    UPROPERTY(EditAnywhere)
    bool AtlantaLowPriority;
    
    DEADBYDAYLIGHT_API FPerkProperties();
};

