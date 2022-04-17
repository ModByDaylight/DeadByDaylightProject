#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "OtherCharactersVerticalCollisionsHandler.generated.h"

class AActor;
class UPrimitiveComponent;
class UCapsuleComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOtherCharactersVerticalCollisionsHandler : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<AActor*> _ignoreBelowActors;
    
    UPROPERTY(Transient)
    TArray<AActor*> _overlappingActors;
    
    UPROPERTY(Export, Transient)
    UCapsuleComponent* _pawnDetector;
    
public:
    UOtherCharactersVerticalCollisionsHandler();
    UFUNCTION(BlueprintCallable)
    void SetPawnDetector(UCapsuleComponent* pawnDetector);
    
private:
    UFUNCTION()
    void OnPawnDetectorOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
    UFUNCTION()
    void OnPawnDetectorOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
    UFUNCTION()
    void InitializeOverlapDetection();
    
};

