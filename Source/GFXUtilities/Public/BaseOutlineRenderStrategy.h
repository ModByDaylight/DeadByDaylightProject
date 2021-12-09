#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseOutlineRenderStrategy.generated.h"

class UBatchMeshCommands;

UCLASS()
class GFXUTILITIES_API UBaseOutlineRenderStrategy : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TArray<UBatchMeshCommands*> _batchCommands;
    
public:
    UBaseOutlineRenderStrategy();
};

