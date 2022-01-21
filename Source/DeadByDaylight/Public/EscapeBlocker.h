#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EscapeBlocker.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS()
class DEADBYDAYLIGHT_API AEscapeBlocker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UBoxComponent* _camperBlocker;
    
    UPROPERTY(Export)
    UBoxComponent* _playerDetectionZone;
    
public:
    AEscapeBlocker();
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayerDetectionZone(UBoxComponent* playerDetectionZone);
    
    UFUNCTION(BlueprintCallable)
    void SetCamperBlocker(UBoxComponent* camperBlocker);
    
private:
    UFUNCTION()
    void OnPlayerDetectionZoneEndOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
    UFUNCTION()
    void OnPlayerDetectionZoneBeginOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void DeactivatePlayerBlockerFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ActivatePlayerBlockerFX();
    
};

