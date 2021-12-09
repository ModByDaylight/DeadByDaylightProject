#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PrimitivesRegistererComponent.generated.h"

class UPrimitiveCollection;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class PHYSICSUTILITIES_API UPrimitivesRegistererComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> _primitives;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UPrimitiveCollection> _primitiveCollection;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPrimitives(const TArray<UPrimitiveComponent*>& primitives);
    
    UPrimitivesRegistererComponent();
};

