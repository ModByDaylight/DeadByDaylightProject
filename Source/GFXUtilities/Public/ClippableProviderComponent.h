#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClippableProviderComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UClippableProviderComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TSet<UPrimitiveComponent*> _ignoredPrimitives;
    
public:
    UClippableProviderComponent();
    UFUNCTION(BlueprintCallable)
    void SetIgnoredPrimitives(const TArray<UPrimitiveComponent*>& ignoredPrimitives);
    
};

