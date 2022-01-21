#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "InGameAssetPreloaderComponent.generated.h"

class UInGameAssetPreloaderGatherer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInGameAssetPreloaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSet<FPrimaryAssetId> _generalPrimaryAssetIds;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<TSoftClassPtr<UObject>> _generalRegularAssets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UInGameAssetPreloaderGatherer>> _assetGathererClasses;
    
    UPROPERTY(Transient)
    TArray<UInGameAssetPreloaderGatherer*> _assetGatherers;
    
public:
    UInGameAssetPreloaderComponent();
};

