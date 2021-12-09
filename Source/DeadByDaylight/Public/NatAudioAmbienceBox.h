#pragma once
#include "CoreMinimal.h"
#include "AmbienceBoxComponent.h"
#include "Engine/EngineTypes.h"
#include "NatAudioAmbienceBox.generated.h"

class AActor;
class UAkAudioEvent;
class UPrimitiveComponent;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UNatAudioAmbienceBox : public UAmbienceBoxComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* _onBeginOverlapAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* _onEndOverlapAudioEvent;
    
    UFUNCTION()
    void OnEndOverlapAudioAmbience(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlapAudioAmbience(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
public:
    UNatAudioAmbienceBox();
};

