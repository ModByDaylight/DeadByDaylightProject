#pragma once
#include "CoreMinimal.h"
#include "BaseLoadoutPartViewData.h"
#include "EStatusEffectType.h"
#include "PerkViewData.generated.h"

USTRUCT(BlueprintType)
struct FPerkViewData : public FBaseLoadoutPartViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStatusEffectType StatusEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StackCount;
    
    DBDUIVIEWINTERFACES_API FPerkViewData();
};

