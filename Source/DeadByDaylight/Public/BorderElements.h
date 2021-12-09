#pragma once
#include "CoreMinimal.h"
#include "EDirection.h"
#include "BorderElements.generated.h"

class UActorSpawner;

USTRUCT(BlueprintType)
struct FBorderElements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UActorSpawner*> Elements;
    
    DEADBYDAYLIGHT_API FBorderElements();
};

