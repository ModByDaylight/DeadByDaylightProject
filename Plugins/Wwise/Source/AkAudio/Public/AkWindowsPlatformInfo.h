#pragma once
#include "CoreMinimal.h"
#include "AkWin64PlatformInfo.h"
#include "AkWindowsPlatformInfo.generated.h"

UCLASS()
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo {
    GENERATED_BODY()
public:
    UAkWindowsPlatformInfo();
};

