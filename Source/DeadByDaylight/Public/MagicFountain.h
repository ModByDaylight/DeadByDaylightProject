#pragma once
#include "CoreMinimal.h"
#include "AIInteractableTargetInterface.h"
#include "Interactable.h"
#include "UObject/NoExportTypes.h"
#include "MagicFountain.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AMagicFountain : public AInteractable, public IAIInteractableTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector AIInteractionOffset;
    
    AMagicFountain();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsCorrupted() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

