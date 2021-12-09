#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EKillerAbilities.h"
#include "EPreLevelGenerationModifierType.h"
#include "PreLevelGenerationModifierProperties.generated.h"

USTRUCT()
struct FPreLevelGenerationModifierProperties : public FDBDTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName ModifierID;
    
    UPROPERTY(EditAnywhere)
    EPreLevelGenerationModifierType ModifierType;
    
    UPROPERTY(EditAnywhere)
    EKillerAbilities KillerAbiliy;
    
    UPROPERTY(EditAnywhere)
    float ModifierValue;
    
public:
    DEADBYDAYLIGHT_API FPreLevelGenerationModifierProperties();
};

