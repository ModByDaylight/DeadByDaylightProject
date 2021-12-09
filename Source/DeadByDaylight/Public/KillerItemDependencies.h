#pragma once
#include "CoreMinimal.h"
#include "EKillerAbilities.h"
#include "KillerItemProperty.h"
#include "KillerItemDependencies.generated.h"

USTRUCT(BlueprintType)
struct FKillerItemDependencies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EKillerAbilities KillerAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKillerItemProperty> Items;
    
    DEADBYDAYLIGHT_API FKillerItemDependencies();
};

