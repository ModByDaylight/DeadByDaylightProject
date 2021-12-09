#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EPlayerRole.h"
#include "EGameType.h"
#include "Layout/Geometry.h"
#include "UMGAtlantaTallyScreen.generated.h"

class UUMGTallyCharacterProgressionWidget;
class UUMGTallyListWidget;
class UUMGTallyPlayerLevelWidget;
class UUMGTallyBloodpointsWidget;
class UUMGTallyScoreboardWidget;
class UUMGTallyRankWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGAtlantaTallyScreenOnTallyLeft);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGAtlantaTallyScreenOnTallySpectateClicked);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGAtlantaTallyScreenOnTallyAddFriendEvent, const FString&, playerID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGAtlantaTallyScreenOnTallyReportEvent, const FString&, playerID);

UCLASS(EditInlineNew)
class UUMGAtlantaTallyScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGAtlantaTallyScreenOnTallyLeft OnTallyLeft;
    
    UPROPERTY(BlueprintAssignable)
    FUMGAtlantaTallyScreenOnTallySpectateClicked OnTallySpectateClicked;
    
    UPROPERTY(BlueprintAssignable)
    FUMGAtlantaTallyScreenOnTallyAddFriendEvent OnTallyAddFriendEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUMGAtlantaTallyScreenOnTallyReportEvent OnTallyReportEvent;
    
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
    
public:
    UUMGAtlantaTallyScreen();
};

