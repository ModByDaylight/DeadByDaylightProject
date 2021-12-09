#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CrossPlatformManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCrossPlatformManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool _crossPlayAllowedByPlatform;
    
    UPROPERTY(Transient)
    bool _crossPlayAllowedByKraken;
    
public:
    UCrossPlatformManager();
};

