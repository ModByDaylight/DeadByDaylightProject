#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ActorDetectorComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorDetectorComponentOnActorDetected, AActor*, actor);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UActorDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FActorDetectorComponentOnActorDetected OnActorDetected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UClass*> CollectedTypes;
    
private:
    UPROPERTY(Export)
    UPrimitiveComponent* _primitive;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDetectionPrimitive(UPrimitiveComponent* primitive);
    
protected:
    UFUNCTION()
    void OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UActorDetectorComponent();
};

