#pragma once
#include "CoreMinimal.h"
#include "SpecialBehaviourInteractable.h"
#include "ToxinPlantInteractable.generated.h"

UCLASS()
class HALLOWEEN2020_API AToxinPlantInteractable : public ASpecialBehaviourInteractable {
    GENERATED_BODY()
public:
    AToxinPlantInteractable();
    UFUNCTION(BlueprintCallable)
    void SetToxinPlantComplete(const bool isComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToxinPlantComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSalvageInteractionStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSalvageInteractionFinished();
    
    UFUNCTION(BlueprintPure)
    bool IsToxinPlantComplete() const;
    
};

