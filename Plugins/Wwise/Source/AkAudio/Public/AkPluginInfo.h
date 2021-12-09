#pragma once
#include "CoreMinimal.h"
#include "AkPluginInfo.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkPluginInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Name;
    
    UPROPERTY(VisibleAnywhere)
    uint32 PluginID;
    
    UPROPERTY(VisibleAnywhere)
    FString DLL;
    
    FAkPluginInfo();
};

