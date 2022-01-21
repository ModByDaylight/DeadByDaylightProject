#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OutOfSightMeshRotator.generated.h"

class ADBDPlayer;
class UMeshComponent;

UCLASS(BlueprintType, Transient, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOutOfSightMeshRotator : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _maxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float _dotProductThreshold;
    
private:
    UPROPERTY(Transient)
    ADBDPlayer* _locallyObservedPlayer;
    
    UPROPERTY(Export, Transient)
    TArray<UMeshComponent*> _meshesToRotate;
    
    UPROPERTY(EditDefaultsOnly)
    float _rotationOffset;
    
public:
    UOutOfSightMeshRotator();
protected:
    UFUNCTION(BlueprintCallable)
    void SetMeshesToRotate(TArray<UMeshComponent*> meshesToRotate);
    
};

