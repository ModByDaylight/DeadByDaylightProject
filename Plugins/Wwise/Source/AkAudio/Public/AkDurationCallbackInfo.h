#pragma once
#include "CoreMinimal.h"
#include "AkEventCallbackInfo.h"
#include "AkDurationCallbackInfo.generated.h"

UCLASS()
class UAkDurationCallbackInfo : public UAkEventCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EstimatedDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AudioNodeID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MediaID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStreaming;
    
    UAkDurationCallbackInfo();
};

