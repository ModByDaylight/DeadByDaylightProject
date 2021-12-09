#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMapActorCategory.h"
#include "Engine/EngineTypes.h"
#include "MapActorDetectorComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapActorDetectorComponentOnActorDetected, AActor*, actor);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UMapActorDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMapActorDetectorComponentOnActorDetected OnActorDetected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<EMapActorCategory> CollectedCategories;
    
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
    UMapActorDetectorComponent();
};

