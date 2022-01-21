#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "Engine/EngineTypes.h"
#include "UMGAtlantaSeasonEndPopup.generated.h"

class UHorizontalBox;
class UUMGTallyRankBanner;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaSeasonEndPopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyRankBanner* OldSurvivorRankBanner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyRankBanner* NewSurvivorRankBanner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyRankBanner* OldKillerRankBanner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyRankBanner* NewKillerRankBanner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* NewRankHorizontalBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* OldRankHorizontalBox;
    
private:
    UPROPERTY(Transient)
    FTimerHandle _fadeOutTimerHandle;
    
    UPROPERTY(EditDefaultsOnly)
    float _timerBeforeFadeOutAnimation;
    
public:
    UUMGAtlantaSeasonEndPopup();
private:
    UFUNCTION()
    void TriggerFadeOutAnimationTimer();
    
    UFUNCTION()
    void PlayNewRankFadeInAnimation();
    
};

