#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EStorefrontState.h"
#include "LandingPageTabData.h"
#include "LandingPageTabsDataAsset.generated.h"

UCLASS()
class ULandingPageTabsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EStorefrontState, FLandingPageTabData> BigButtonsData;
    
    UPROPERTY(EditAnywhere)
    TMap<EStorefrontState, FLandingPageTabData> MediumButtonsData;
    
    UPROPERTY(EditAnywhere)
    TMap<EStorefrontState, FLandingPageTabData> SmallButtonsData;
    
    ULandingPageTabsDataAsset();
};

