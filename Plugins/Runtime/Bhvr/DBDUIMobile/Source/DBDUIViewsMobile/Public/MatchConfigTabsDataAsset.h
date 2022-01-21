#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECustomMatchTab.h"
#include "MatchConfigTabData.h"
#include "MatchConfigTabsDataAsset.generated.h"

UCLASS()
class UMatchConfigTabsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<ECustomMatchTab, FMatchConfigTabData> Data;
    
    UMatchConfigTabsDataAsset();
};

