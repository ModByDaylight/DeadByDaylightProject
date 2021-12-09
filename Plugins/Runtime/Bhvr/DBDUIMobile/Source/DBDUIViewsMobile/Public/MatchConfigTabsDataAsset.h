#pragma once
#include "CoreMinimal.h"
#include "MatchConfigTabData.h"
#include "Engine/DataAsset.h"
#include "ECustomMatchTab.h"
#include "MatchConfigTabsDataAsset.generated.h"

UCLASS()
class UMatchConfigTabsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<ECustomMatchTab, FMatchConfigTabData> Data;
    
    UMatchConfigTabsDataAsset();
};

