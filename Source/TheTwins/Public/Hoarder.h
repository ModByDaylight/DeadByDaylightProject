#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "EPerkInteractionObjectType.h"
#include "Hoarder.generated.h"

class ACamperPlayer;
class ASearchable;
class AActor;

UCLASS()
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
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Local_ThrowBubbleIndicator(const EPerkInteractionObjectType camperInteractionType, const AActor* objectActor, const ACamperPlayer* interactingCamperPlayer);
    
    UFUNCTION(BlueprintPure)
    float GetBubbleIndicatorLifetime() const;
    
public:
    UHoarder();
};

