#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "UObject/NoExportTypes.h"
#include "MagicFountain.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AMagicFountain : public AInteractable, public IAIInteractableTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector AIInteractionOffset;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsCorrupted() const;
    
    AMagicFountain();
};

