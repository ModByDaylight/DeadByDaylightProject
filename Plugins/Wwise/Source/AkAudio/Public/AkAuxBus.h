#pragma once
#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkAuxBus.generated.h"

class UAkAudioBank;

UCLASS()
class AKAUDIO_API UAkAuxBus : public UAkAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAkAudioBank* RequiredBank;
    
    UAkAuxBus();
};

