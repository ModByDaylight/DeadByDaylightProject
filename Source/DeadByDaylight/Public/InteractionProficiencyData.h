#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "InteractionProficiencyData.generated.h"

USTRUCT(BlueprintType)
struct FInteractionProficiencyData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStatusEffectType ProficiencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
public:
    DEADBYDAYLIGHT_API FInteractionProficiencyData();
};

