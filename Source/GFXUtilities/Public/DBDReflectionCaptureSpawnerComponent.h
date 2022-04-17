#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "Components/ReflectionCaptureComponent.h"
#include "DBDReflectionCaptureSpawnerComponent.generated.h"

class UTextureCube;
class AReflectionCapture;
class UReflectionCaptureComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDReflectionCaptureSpawnerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EReflectionSourceType ReflectionSourceType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTextureCube* Cubemap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SourceCubemapAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Brightness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ContributionFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IBLMultiplicator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanBeTinted;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector CaptureOffset;
    
protected:
    UPROPERTY(Transient)
    TArray<AReflectionCapture*> SpawnedReflectionCaptures;
    
    UPROPERTY(Export, Transient)
    TArray<UReflectionCaptureComponent*> SpawnedReflectionCaptureComponents;
    
public:
    UDBDReflectionCaptureSpawnerComponent();
    UFUNCTION(BlueprintCallable)
    void SetIBLMultiplicator(float NewIBLMultiplicator);
    
    UFUNCTION(BlueprintCallable)
    void SetContributionFactor(float NewContributionFactor);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(float NewBrightness);
    
};

