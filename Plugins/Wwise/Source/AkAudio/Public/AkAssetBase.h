#pragma once
#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkAssetBase.generated.h"

class UAkAssetPlatformData;

UCLASS()
class AKAUDIO_API UAkAssetBase : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UAkAssetPlatformData* PlatformAssetData;
    
    UAkAssetBase();
};

