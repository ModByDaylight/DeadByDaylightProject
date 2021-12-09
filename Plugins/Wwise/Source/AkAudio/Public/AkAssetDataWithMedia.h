#pragma once
#include "CoreMinimal.h"
#include "AkAssetData.h"
#include "AkAssetDataWithMedia.generated.h"

class UAkMediaAsset;

UCLASS()
class AKAUDIO_API UAkAssetDataWithMedia : public UAkAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<UAkMediaAsset>> MediaList;
    
    UAkAssetDataWithMedia();
};

