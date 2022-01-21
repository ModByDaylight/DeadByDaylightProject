#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StillnessTrackerComponent.h"
#include "Engine/EngineTypes.h"
#include "CamperStillnessTrackerComponent.generated.h"

class ACamperExposerInstance;
class UExposerInteriorZoneComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperStillnessTrackerComponent : public UStillnessTrackerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChickenShitModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LoudNoiseTime;
    
private:
    UPROPERTY(Transient)
    TArray<float> ExposerSpawnTimes;
    
    UPROPERTY(Transient)
    TArray<float> ExposerDespawnTimes;
    
    UPROPERTY(Transient)
    TSubclassOf<ACamperExposerInstance> _exposerInstanceToSpawn;
    
    UPROPERTY(Transient)
    TArray<ACamperExposerInstance*> _exposerInstances;
    
    UPROPERTY(Export, Transient)
    UExposerInteriorZoneComponent* _interiorZone;
    
public:
    UCamperStillnessTrackerComponent();
protected:
    UFUNCTION()
    void OnOverlapExit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExitInteriorZone(UExposerInteriorZoneComponent* zone);
    
    UFUNCTION(BlueprintCallable)
    void EnterInteriorZone(UExposerInteriorZoneComponent* zone);
    
};

