#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PrimitivesRegistererComponent.generated.h"

class UPrimitiveComponent;
class UPrimitiveCollection;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class PHYSICSUTILITIES_API UPrimitivesRegistererComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> _primitives;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UPrimitiveCollection> _primitiveCollection;
    
public:
    UPrimitivesRegistererComponent();
    UFUNCTION(BlueprintCallable)
    void SetPrimitives(const TArray<UPrimitiveComponent*>& primitives);
    
};

