#pragma once
#include "CoreMinimal.h"
#include "DBDPrimaryDataAsset.h"
#include "GameplayModifierContainerDataAsset.generated.h"

class UActorComponent;
class UGameplayModifierContainerDataAsset;

UCLASS(Abstract)
class DEADBYDAYLIGHT_API UGameplayModifierContainerDataAsset : public UDBDPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UActorComponent> ModifierContainerComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UGameplayModifierContainerDataAsset>> RequiredModifierContainers;
    
    UGameplayModifierContainerDataAsset();
};

