#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StandDisplayable.h"
#include "Charm.generated.h"

class USkeletalMeshComponent;
class AItemVfx;

UCLASS()
class ACharm : public AActor, public IStandDisplayable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    USkeletalMeshComponent* _skeletalMeshComponent;
    
private:
    UPROPERTY(Transient)
    AItemVfx* _actorVfx;
    
public:
    ACharm();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void BeginDestroySequence_Internal();
    
    
    // Fix for true pure virtual functions not being implemented
};

