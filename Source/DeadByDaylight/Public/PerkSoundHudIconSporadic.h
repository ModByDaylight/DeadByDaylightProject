#pragma once
#include "CoreMinimal.h"
#include "PerkSoundHudIcon.h"
#include "Layout/Geometry.h"
#include "PerkSoundHudIconSporadic.generated.h"

class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UPerkSoundHudIconSporadic : public UPerkSoundHudIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SporadicIcon;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeInRate;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeOutRate;
    
    UPROPERTY(EditDefaultsOnly)
    float AnimationStartOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    int32 FadePolynomialOrder;
    
    UPROPERTY(BlueprintReadOnly)
    bool DisplayIcon;
    
public:
    UPerkSoundHudIconSporadic();
    UFUNCTION()
    void NativeTick(const FGeometry& MyGeometry, float DeltaTime);
    
};

