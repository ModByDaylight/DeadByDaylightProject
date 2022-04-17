#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NonTunableStat.h"
#include "InteractionAudioComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDAUDIO_API UInteractionAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UAkComponent* _audioComponent;
    
private:
    UPROPERTY(EditAnywhere)
    FNonTunableStat _audioRadius;
    
public:
    UInteractionAudioComponent();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool PostAkEvent(UAkAudioEvent* akEvent);
    
};

