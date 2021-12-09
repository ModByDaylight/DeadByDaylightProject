#pragma once
#include "CoreMinimal.h"
#include "AkCallbackInfo.h"
#include "AkEventCallbackInfo.generated.h"

UCLASS()
class AKAUDIO_API UAkEventCallbackInfo : public UAkCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayingID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 EventID;
    
    UAkEventCallbackInfo();
};

