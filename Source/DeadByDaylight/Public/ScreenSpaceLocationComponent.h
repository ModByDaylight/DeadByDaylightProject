#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScreenSpaceLocationComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UScreenSpaceLocationComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScreenSpaceX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScreenSpaceY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FrameDelay;
    
private:
    UPROPERTY(Transient)
    FVector2D _currentResolution;
    
    UPROPERTY(Transient)
    TArray<FTransform> _previousTransforms;
    
public:
    UScreenSpaceLocationComponent();
    UFUNCTION(BlueprintPure)
    bool HasValidPosition() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCurrentResolution() const;
    
};

