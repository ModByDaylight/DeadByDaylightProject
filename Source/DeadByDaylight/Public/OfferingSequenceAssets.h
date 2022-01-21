#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OfferingRevealDelays.h"
#include "OfferingSequenceAssets.generated.h"

class AOfferingCard;

UCLASS()
class DEADBYDAYLIGHT_API AOfferingSequenceAssets : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FOfferingRevealDelays> OfferingRevealDelays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AOfferingCard*> Cards;
    
    AOfferingSequenceAssets();
    UFUNCTION(BlueprintImplementableEvent)
    void PlaySmoke();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayFadeOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayFadeIn();
    
};

