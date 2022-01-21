#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StreamVideoManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UStreamVideoManager : public UObject {
    GENERATED_BODY()
public:
    UStreamVideoManager();
    UFUNCTION()
    void OnStreamVideoDone();
    
};

