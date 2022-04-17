#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClippedActor.h"
#include "ActorClipperComponent.generated.h"

class USphereComponent;
class AActor;
class UPrimitiveCollection;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorClipperComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USphereComponent* Shape;
    
private:
    UPROPERTY(Transient)
    TMap<AActor*, FClippedActor> _clippedActors;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UPrimitiveCollection> _clippables;
    
public:
    UActorClipperComponent();
    UFUNCTION(BlueprintCallable)
    void SetPrimitiveCollection(const UPrimitiveCollection* clippables);
    
    UFUNCTION(BlueprintCallable)
    void SetClippingEnabled(bool enabled);
    
private:
    UFUNCTION()
    void OnOwnerLocallyObservedChanged(bool locallyObserved);
    
};

