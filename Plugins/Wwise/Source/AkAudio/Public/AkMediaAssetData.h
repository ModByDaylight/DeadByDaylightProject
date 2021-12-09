#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkMediaAssetData.generated.h"

UCLASS()
class AKAUDIO_API UAkMediaAssetData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    bool IsStreamed;
    
    UPROPERTY(VisibleAnywhere)
    bool UseDeviceMemory;
    
    UAkMediaAssetData();
};

