#pragma once
#include "CoreMinimal.h"
#include "WindowBlockableList.generated.h"

class UBlockableComponent;

USTRUCT(BlueprintType)
struct FWindowBlockableList {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UBlockableComponent*> Blockables;
    
    DBDCOMPETENCE_API FWindowBlockableList();
};

