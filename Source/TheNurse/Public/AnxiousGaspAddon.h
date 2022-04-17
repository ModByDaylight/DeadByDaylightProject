#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemAddon.h"
#include "Engine/EngineTypes.h"
#include "AnxiousGaspAddon.generated.h"

class UAkAudioEvent;
class UPrimitiveComponent;
class UCapsuleComponent;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UAnxiousGaspAddon : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* _screamSoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _scoreEventTag;
    
    UPROPERTY(EditDefaultsOnly)
    float _detectionCapsuleHalfHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float _detectionCapsuleRadius;
    
    UPROPERTY(Export, Transient)
    UCapsuleComponent* _survivorDetector;
    
    UPROPERTY(Transient)
    TSet<AActor*> _alreadyDetectedPlayers;
    
public:
    UAnxiousGaspAddon();
private:
    UFUNCTION()
    void OnDetectorOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
};

