#pragma once
#include "CoreMinimal.h"
#include "OfferingTypeTexture.h"
#include "GameFramework/Actor.h"
#include "RarityTexture.h"
#include "EOfferingAnimState.h"
#include "OfferingCard.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AOfferingCard : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRarityTexture> RarityTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FOfferingTypeTexture> OfferingTypeTextures;
    
    AOfferingCard();
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnim(EOfferingAnimState state);
    
};

