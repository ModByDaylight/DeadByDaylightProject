#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PrimitiveCollection.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType)
class PHYSICSUTILITIES_API UPrimitiveCollection : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TSet<TWeakObjectPtr<UPrimitiveComponent>> _primitives;
    
public:
    UPrimitiveCollection();
    UFUNCTION(BlueprintCallable)
    void Remove(UPrimitiveComponent* primitive);
    
    UFUNCTION(BlueprintCallable)
    void Add(UPrimitiveComponent* primitive);
    
};

