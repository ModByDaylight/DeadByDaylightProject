#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "EAttackEventType.h"
#include "AttackEventTypeDetails.generated.h"

USTRUCT(BlueprintType)
struct FAttackEventTypeDetails : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttackEventType AttackEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanBeProtective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AssociatedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    DEADBYDAYLIGHT_API FAttackEventTypeDetails();
};

