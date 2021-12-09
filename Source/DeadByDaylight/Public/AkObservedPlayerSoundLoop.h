#pragma once
#include "CoreMinimal.h"
#include "AkSoundLoop.h"
#include "AkObservedPlayerSoundLoop.generated.h"

class UPlayerPerspectiveComponent;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FAkObservedPlayerSoundLoop : public FAkSoundLoop {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPlayerPerspectiveComponent> _perspectiveComponent;
    
public:
    FAkObservedPlayerSoundLoop();
};

