#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ExposerCirclingComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UExposerCirclingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DirectionFollows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CirclingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceBetweenPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BezierModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Samples;
    
    UExposerCirclingComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsCircling(bool circling);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
};

