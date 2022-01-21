#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "RenjirosBloodyGlove.generated.h"

class UBloodOrbOverlapRevealToKiller;
class ACamperPlayer;
class ABloodOrb;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class URenjirosBloodyGlove : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _revealTime;
    
    UPROPERTY(Export, Transient)
    TMap<ACamperPlayer*, UBloodOrbOverlapRevealToKiller*> _revealEffectPerCamper;
    
public:
    URenjirosBloodyGlove();
private:
    UFUNCTION()
    void Authority_OnBloodOrbOverlapBegin(const AActor* overlappingActor, const ABloodOrb* bloodOrb);
    
};

