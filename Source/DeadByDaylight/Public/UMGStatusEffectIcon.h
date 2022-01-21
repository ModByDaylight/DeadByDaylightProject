#pragma once
#include "CoreMinimal.h"
#include "UMGLoadoutItemButton.h"
#include "StatusEffectSlotData.h"
#include "UMGStatusEffectIcon.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGStatusEffectIcon : public UUMGLoadoutItemButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FStatusEffectSlotData StatusEffectData;
    
    UUMGStatusEffectIcon();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePercentageFill(float percentage);
    
};

