#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NonTunableStat.h"
#include "InteractionAudioComponent.generated.h"

class UAkComponent;
class UAkAudioEvent;

UCLASS(BlueprintType)
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
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool PostAkEvent(UAkAudioEvent* akEvent);
    
    UInteractionAudioComponent();
};

