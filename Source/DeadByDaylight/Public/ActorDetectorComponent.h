#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnActorDetectedDelegate.h"
#include "Engine/EngineTypes.h"
#include "ActorDetectorComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnActorDetected OnActorDetected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UClass*> CollectedTypes;
    
private:
    UPROPERTY(Export)
    UPrimitiveComponent* _primitive;
    
public:
    UActorDetectorComponent();
    UFUNCTION(BlueprintCallable)
    void SetDetectionPrimitive(UPrimitiveComponent* primitive);
    
protected:
    UFUNCTION()
    void OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

