#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectStateProvider.h"
#include "TestObjectStateProviderComponent.generated.h"

class UGameplayTagContainerComponent;

UCLASS()
class UTestObjectStateProviderComponent : public UActorComponent, public IObjectStateProvider {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UGameplayTagContainerComponent* GameplayTagContainerComponent;
    
    UTestObjectStateProviderComponent();
};

