#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "UObject/NoExportTypes.h"
#include "DBDSpringArmComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableComponentwiseCameraLag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ComponenwiseCameraLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetArmMinLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableDistanceCameraLag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraDistanceLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDrawDebugTraceMarkers: 1;
    
protected:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> IgnoreActors;
    
public:
    UDBDSpringArmComponent();
    UFUNCTION(BlueprintCallable)
    void IgnoreActor(AActor* Actor, bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable)
    void ClearIgnoreActors();
    
};

