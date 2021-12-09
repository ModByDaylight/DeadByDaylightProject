#pragma once
#include "CoreMinimal.h"
#include "BlindingFXComponent.h"
#include "KillerBlindingFXComponent.generated.h"

class ADBDPlayer;
class UAkAudioEvent;

UCLASS()
class DEADBYDAYLIGHT_API UKillerBlindingFXComponent : public UBlindingFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* _blindedSound;
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnBlindedByPlayersCosmetic(const TArray<ADBDPlayer*>& players);
    
public:
    UKillerBlindingFXComponent();
};

