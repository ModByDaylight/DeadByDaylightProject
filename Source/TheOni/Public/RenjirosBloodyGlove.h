#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "RenjirosBloodyGlove.generated.h"

class ABloodOrb;
class ACamperPlayer;
class AActor;
class UBloodOrbOverlapRevealToKiller;

UCLASS()
class URenjirosBloodyGlove : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _revealTime;
    
    UPROPERTY(Export, Transient)
    TMap<ACamperPlayer*, UBloodOrbOverlapRevealToKiller*> _revealEffectPerCamper;
    
    UFUNCTION()
    void Authority_OnBloodOrbOverlapBegin(const AActor* overlappingActor, const ABloodOrb* bloodOrb);
    
public:
    URenjirosBloodyGlove();
};

