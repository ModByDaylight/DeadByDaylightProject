#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "EPerkInteractionObjectType.h"
#include "Hoarder.generated.h"

class ASearchable;
class ACamperPlayer;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHoarder : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ASearchable*> _chests;
    
    UPROPERTY(EditDefaultsOnly)
    float _camperInteractItemPickupRevealRange[3];
    
    UPROPERTY(EditDefaultsOnly)
    int32 _extraChestsSpawned[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _bubbleIndicatorLifetime[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _showUniqueChestVisualPerState;
    
public:
    UHoarder();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Local_ThrowBubbleIndicator(const EPerkInteractionObjectType camperInteractionType, const AActor* objectActor, const ACamperPlayer* interactingCamperPlayer);
    
    UFUNCTION(BlueprintPure)
    float GetBubbleIndicatorLifetime() const;
    
};

