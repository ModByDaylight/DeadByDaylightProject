#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MontagePlaybackDefinition.h"
#include "ScreamComponent.generated.h"

class UAkAudioEvent;
class UPerkManager;
class UMontagePlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UScreamComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UPerkManager* _perkManager;
    
    UPROPERTY(Export, Transient)
    UMontagePlayer* _montagePlayer;
    
public:
    UScreamComponent();
    UFUNCTION(BlueprintCallable)
    bool PlayScreamSoundAndAnimation(UAkAudioEvent* audioEvent, bool fireLoudNoiseEvent, FMontagePlaybackDefinition montageDefinition, float audibleRange);
    
    UFUNCTION(BlueprintCallable)
    bool PlayScreamSound(UAkAudioEvent* audioEvent, bool fireLoudNoiseEvent, float audibleRange);
    
    UFUNCTION(BlueprintPure)
    bool CanScream() const;
    
};

