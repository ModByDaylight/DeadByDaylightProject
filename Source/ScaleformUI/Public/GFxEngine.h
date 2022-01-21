#pragma once
#include "CoreMinimal.h"
#include "GCReference.h"
#include "UObject/Object.h"
#include "GFxEngine.generated.h"

UCLASS(MinimalAPI, Transient)
class UGFxEngine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGCReference> GCReferences;
    
    UPROPERTY()
    int32 RefCount;
    
    UGFxEngine();
};

