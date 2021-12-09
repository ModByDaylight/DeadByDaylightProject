#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EAttackType.h"
#include "AttackTypeDetails.generated.h"

USTRUCT(BlueprintType)
struct FAttackTypeDetails : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsBasicAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AssociatedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    DEADBYDAYLIGHT_API FAttackTypeDetails();
};

