#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreBaseHudWidget.h"
#include "PlayerStatusViewInterface.h"
#include "EPlayerStatus.h"
#include "PlayerStatusAssets.h"
#include "GameplayTagContainer.h"
#include "PlayerStatusViewData.h"
#include "ESleepingUIState.h"
#include "EObsessionUIState.h"
#include "EPlayerStateChangeType.h"
#include "CorePlayerStatusWidget.generated.h"

class UAkAudioEvent;
class UOverlay;
class UDBDTextBlock;
class UCorePlayerStatusKillerEffectWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerStatusWidget : public UCoreBaseHudWidget, public IPlayerStatusViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPlayerStatus, FPlayerStatusAssets> PlayerStatusAssets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ObsessionSfx;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UDBDTextBlock* PlayerNameTextfield;
    
    UPROPERTY(EditAnywhere, Export)
    UOverlay* KillerStatusContainer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UCorePlayerStatusKillerEffectWidget>> KillerStatusEffectWidgetClasses;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FPlayerStatusViewData _cachedViewData;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UCorePlayerStatusKillerEffectWidget* _killerStatusEffectWidget;
    
public:
    UCorePlayerStatusWidget();
protected:
    UFUNCTION(BlueprintPure)
    bool ShouldPlaySleepAnimation(ESleepingUIState newSleepState) const;
    
    UFUNCTION(BlueprintPure)
    bool HasTimerProgressChanged(float newTimerProgress) const;
    
    UFUNCTION(BlueprintPure)
    bool HasPlayerStatusDataChanged(const FPlayerStatusViewData& newViewData) const;
    
    UFUNCTION(BlueprintPure)
    bool HasPlayerStateChanged(EPlayerStatus newPlayerState) const;
    
    UFUNCTION(BlueprintPure)
    bool HasObsessionStateChanged(EObsessionUIState newObsessionState) const;
    
    UFUNCTION(BlueprintPure)
    bool HasKillerStatusDataChanged(const FPlayerStatusViewData& newViewData) const;
    
    UFUNCTION(BlueprintPure)
    EPlayerStateChangeType GetPlayerStateChangeType(const FPlayerStatusViewData& newViewData) const;
    
    UFUNCTION(BlueprintPure)
    UCorePlayerStatusKillerEffectWidget* GetKillerStatusEffectWidget() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

