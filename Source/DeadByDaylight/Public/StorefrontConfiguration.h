#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EStorefrontState.h"
#include "StorefrontStateData.h"
#include "StorefrontConfiguration.generated.h"

UCLASS(BlueprintType)
class UStorefrontConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStorefrontState, FStorefrontStateData> States;
    
    UStorefrontConfiguration();
};

