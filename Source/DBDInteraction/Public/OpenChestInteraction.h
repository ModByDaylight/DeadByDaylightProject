#pragma once
#include "CoreMinimal.h"
#include "SearchChestInteractionBase.h"
#include "GameplayTagContainer.h"
#include "OpenChestInteraction.generated.h"

class UAnimSequence;
class ACollectable;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UOpenChestInteraction : public USearchChestInteractionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _camperSearchablePercentTag;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* _successExitTimeAnimSequenceReference;
    
    UPROPERTY(Transient)
    float _startTime;
    
public:
    UOpenChestInteraction();
private:
    UFUNCTION(BlueprintCallable)
    void CollectItemIfEmptyHanded(ACollectable* collectable, const ADBDPlayer* player);
    
};

