#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaSkillCheckWidget.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaSkillCheckWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SkillCheckArea;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* HitArea;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Hit;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* OrangeSmoke;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* BonusArea;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* StartMarker;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* EndMarker;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* HitAreaContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* BonusAreaContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* HitAreaStartMarkerContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* HitAreaEndMarkerContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* MarkerContainer;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor HexColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor DefaultColor;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool _isPlayAnimation;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float PathCoveredAngle;
    
public:
    UAtlantaSkillCheckWidget();
    UFUNCTION(BlueprintCallable)
    void SetHexed(bool isHexed);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool active);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIsActiveChanged(bool NewIsActive);
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
};

