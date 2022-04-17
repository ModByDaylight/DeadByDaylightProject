#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPlayerStatusIcon.generated.h"

class UImage;
class UUMGLacerationStatusEffectUI;
class UProgressBar;
class UUMGStalkingStatusEffectUI;
class UCanvasPanel;
class UMaterialInstanceDynamic;
class UTextBlock;
class UTexture2D;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPlayerStatusIcon : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* HealthBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* TimerBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* HealthBarContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* TimerBarContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PlayerName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* StatusIconBloodTop;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* StatusIconBloodBottom;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* StatusIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ObsessionCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* BrokenIndicatorCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AfflictionCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AfflictionIntroCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SleepStatusCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SleepTimerCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ReverseBearTrapCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ReverseBearTrapArrow;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SicknessCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* SicknessFill;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SpectateCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SelectedSpectatorCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AgonyCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* HandsGrabbing;
    
    UPROPERTY(EditDefaultsOnly)
    float SicknessFillHighOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float SicknessFillLowOpacity;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* StatusEffectContainerCanvas;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* SicknessFillMI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _hookedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _hookedBloodTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _trappedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _trappedBloodTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _deadTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _deadBloodTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _escapedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _injuredTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _injuredBloodTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _crawlingTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _crawlingBloodTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _sacrificedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _sacrificedBloodTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _disconnectedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _deathBedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* _defaultTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UUMGStalkingStatusEffectUI> UMGStalkingStatusEffectUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UUMGLacerationStatusEffectUI> UMGLacerationStatusEffectUIClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _maxNumberCharacterInName;
    
private:
    UPROPERTY(Export, Transient)
    UUMGStalkingStatusEffectUI* _stalkingStatusEffectUI;
    
    UPROPERTY(Export, Transient)
    UUMGLacerationStatusEffectUI* _lacerationStatusEffectUI;
    
public:
    UUMGPlayerStatusIcon();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSleepingTimer(const float progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReverseTrapProgressionTimer(float seconds);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStatusButtonClicked();
    
};

