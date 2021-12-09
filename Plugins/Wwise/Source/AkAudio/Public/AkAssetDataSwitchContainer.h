#pragma once
#include "CoreMinimal.h"
#include "AkAssetDataWithMedia.h"
#include "AkAssetDataSwitchContainer.generated.h"

class UAkGroupValue;
class UAkAssetDataSwitchContainerData;

UCLASS()
class AKAUDIO_API UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<UAkAssetDataSwitchContainerData*> SwitchContainers;
    
    UPROPERTY(VisibleAnywhere)
    UAkGroupValue* DefaultGroupValue;
    
    UAkAssetDataSwitchContainer();
};

