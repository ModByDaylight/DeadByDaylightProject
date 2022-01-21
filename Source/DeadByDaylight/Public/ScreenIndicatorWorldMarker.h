#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHudScreenIndicatorType.h"
#include "UObject/NoExportTypes.h"
#include "ScreenIndicatorWorldMarker.generated.h"

class UTexture2D;

UCLASS()
class AScreenIndicatorWorldMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* HudScreenIndicatorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHudScreenIndicatorType HudScreenIndicatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRange VisibleDistanceRange;
    
    AScreenIndicatorWorldMarker();
};

