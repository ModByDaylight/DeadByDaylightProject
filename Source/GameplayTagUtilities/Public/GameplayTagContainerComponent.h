#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainerComponent.generated.h"

UCLASS(BlueprintType)
class GAMEPLAYTAGUTILITIES_API UGameplayTagContainerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void Remove(FGameplayTag state);
    
    UFUNCTION(BlueprintCallable)
    void Add(FGameplayTag state);
    
    UGameplayTagContainerComponent();
};

