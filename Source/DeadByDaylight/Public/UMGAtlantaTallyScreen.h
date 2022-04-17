#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Layout/Geometry.h"
#include "OnTallyScoreboardAddFriendEventDelegate.h"
#include "OnTallyLeftDelegate.h"
#include "OnTallySpectateClickedDelegate.h"
#include "OnTallyScoreboardReportEventDelegate.h"
#include "EGameType.h"
#include "EPlayerRole.h"
#include "UMGAtlantaTallyScreen.generated.h"

class UUMGTallyScoreboardWidget;
class UUMGTallyBloodpointsWidget;
class UUMGTallyListWidget;
class UUMGTallyRankWidget;
class UUMGTallyPlayerLevelWidget;
class UUMGTallyCharacterProgressionWidget;

UCLASS(EditInlineNew)
class UUMGAtlantaTallyScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnTallyLeft OnTallyLeft;
    
    UPROPERTY(BlueprintAssignable)
    FOnTallySpectateClicked OnTallySpectateClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnTallyScoreboardAddFriendEvent OnTallyAddFriendEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnTallyScoreboardReportEvent OnTallyReportEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyListWidget* TallyScrollWidget;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGTallyScoreboardWidget> TallyScoreboardClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGTallyBloodpointsWidget> TallyBloodpointsClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGTallyRankWidget> TallyRankClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGTallyPlayerLevelWidget> TallyPlayerLevelClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGTallyCharacterProgressionWidget> TallyCharacterProgressionClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TextLeaveLobby;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText SpectateButtonText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPlayerRole PlayerRole;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EGameType GameType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 PlayerStatus;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool FromSpectateMode;
    
private:
    UPROPERTY(Export, Transient)
    UUMGTallyScoreboardWidget* _scoreboardWidget;
    
    UPROPERTY(Export, Transient)
    UUMGTallyBloodpointsWidget* _bloodpointsWidget;
    
    UPROPERTY(Export, Transient)
    UUMGTallyRankWidget* _rankWidget;
    
    UPROPERTY(Export, Transient)
    UUMGTallyPlayerLevelWidget* _playerLevelWidget;
    
    UPROPERTY(Export, Transient)
    UUMGTallyCharacterProgressionWidget* _characterLevelWidget;
    
public:
    UUMGAtlantaTallyScreen();
    UFUNCTION(BlueprintImplementableEvent)
    void ShowSpectateButton(bool show);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetScrollPageSize(const FGeometry& MyGeometry);
    
    UFUNCTION(BlueprintCallable)
    void HandleTallySpectateClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleTallyLeave();
    
    UFUNCTION(BlueprintCallable)
    void HandleReportEvent(const FString& playerID);
    
    UFUNCTION(BlueprintCallable)
    void HandleAddFriendEvent(const FString& playerID);
    
};

