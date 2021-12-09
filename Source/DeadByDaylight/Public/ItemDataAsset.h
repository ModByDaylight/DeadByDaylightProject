#pragma once
#include "CoreMinimal.h"
#include "DBDPrimaryDataAsset.h"
#include "ItemDataAsset.generated.h"

class AActor;
class UGameplayModifierContainerDataAsset;

UCLASS()
class DEADBYDAYLIGHT_API UItemDataAsset : public UDBDPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UGameplayModifierContainerDataAsset>> RequiredModifierContainers;
    
    UItemDataAsset();
};

