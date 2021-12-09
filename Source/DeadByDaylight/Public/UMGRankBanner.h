#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EPlayerRole.h"
#include "Highlightable.h"
#include "TooltipPressedData.h"
#include "UMGRankBanner.generated.h"

class UAkAudioEvent;
class UUMGTallyRankFrame;
class UButton;
class UImage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGRankBannerOnLongPressRankTooltipEvent, const FTooltipPressedData&, tooltipPressedData);

UCLASS(Abstract, EditInlineNew)
class UUMGRankBanner : public UMobileBaseUserWidget, public IHighlightable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyRankFrame* RankFrameWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* TooltipButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* HighlightImage;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* OnLongPressSound;
    
private:
    UPROPERTY()
    FUMGRankBannerOnLongPressRankTooltipEvent _onLongPressRankTooltipEvent;
    
public:
    UFUNCTION(BlueprintCallable)
    void StopHighlight();
    
    UFUNCTION(BlueprintCallable)
    void StartHighlight();
    
    UFUNCTION(BlueprintCallable)
    void SetData(int32 rank, EPlayerRole playerRole);
    
private:
    UFUNCTION()
    void HandleTooltipLongPressedEvent();
    
public:
    UUMGRankBanner();
};

