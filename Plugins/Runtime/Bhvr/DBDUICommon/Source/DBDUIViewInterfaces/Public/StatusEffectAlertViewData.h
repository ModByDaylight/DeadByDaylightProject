#pragma once
#include "CoreMinimal.h"
#include "PerkViewData.h"
#include "EStatusEffectType.h"
#include "EHudStatusEffectAlertViewType.h"
#include "AddonViewData.h"
#include "ItemViewData.h"
#include "StatusEffectAlertViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FStatusEffectAlertViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString StatusEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TSoftObjectPtr<UTexture2D> StatusEffectIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStatusEffectType StatusEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHudStatusEffectAlertViewType SourceViewType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPerkViewData PerkViewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemViewData ItemViewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAddonViewData AddonViewData;
    
    FStatusEffectAlertViewData();
};

