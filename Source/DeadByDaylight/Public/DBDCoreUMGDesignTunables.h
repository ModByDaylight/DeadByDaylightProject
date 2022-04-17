#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDCoreUMGDesignTunables.generated.h"

class ADBDPlayerController;
class UCoreHudRootWidget;

UCLASS(Transient, Config=Design)
class DEADBYDAYLIGHT_API UDBDCoreUMGDesignTunables : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UCoreHudRootWidget> CoreHudRootWidgetClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<ADBDPlayerController> CorePlayerControllerClass;
    
    UDBDCoreUMGDesignTunables();
};

