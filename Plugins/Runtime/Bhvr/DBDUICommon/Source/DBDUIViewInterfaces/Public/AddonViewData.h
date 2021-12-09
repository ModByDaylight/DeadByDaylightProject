#pragma once
#include "CoreMinimal.h"
#include "BaseLoadoutPartViewData.h"
#include "EStatusEffectType.h"
#include "AddonViewData.generated.h"

USTRUCT(BlueprintType)
struct FAddonViewData : public FBaseLoadoutPartViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStatusEffectType StatusEffectType;
    
    DBDUIVIEWINTERFACES_API FAddonViewData();
};

