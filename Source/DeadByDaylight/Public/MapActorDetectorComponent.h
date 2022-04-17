#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMapActorCategory.h"
#include "OnMapActorDetectedDelegate.h"
#include "Engine/EngineTypes.h"
#include "MapActorDetectorComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMapActorDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMapActorDetected OnActorDetected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<EMapActorCategory> CollectedCategories;
    
private:
    UPROPERTY(Export)
    UPrimitiveComponent* _primitive;
    
public:
    UMapActorDetectorComponent();
    UFUNCTION(BlueprintCallable)
    void SetDetectionPrimitive(UPrimitiveComponent* primitive);
    
protected:
    UFUNCTION()
    void OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

