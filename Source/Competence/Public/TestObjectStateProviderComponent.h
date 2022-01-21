#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectStateProvider.h"
#include "TestObjectStateProviderComponent.generated.h"

class UGameplayTagContainerComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTestObjectStateProviderComponent : public UActorComponent, public IObjectStateProvider {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UGameplayTagContainerComponent* GameplayTagContainerComponent;
    
    UTestObjectStateProviderComponent();
    
    // Fix for true pure virtual functions not being implemented
};

