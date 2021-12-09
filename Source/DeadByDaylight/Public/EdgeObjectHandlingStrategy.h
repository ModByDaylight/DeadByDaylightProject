#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EdgeObjectHandlingStrategy.generated.h"

class UActorSpawner;

UCLASS()
class UEdgeObjectHandlingStrategy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UActorSpawner*> _edgeObjectSpawners;
    
    UPROPERTY(Export, Transient)
    TArray<UActorSpawner*> _edgeObjectBlockers;
    
public:
    UEdgeObjectHandlingStrategy();
};

