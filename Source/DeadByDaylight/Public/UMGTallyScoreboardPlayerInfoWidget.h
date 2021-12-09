#pragma once
#include "CoreMinimal.h"
#include "UMGLoadoutBaseWidget.h"
#include "TallyPlayerResultData.h"
#include "UMGTallyScoreboardPlayerInfoWidget.generated.h"

class UImage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardAddFriendEvent, const FString&, playerID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardReportEvent, const FString&, playerID);

UCLASS(EditInlineNew)
class UUMGTallyScoreboardPlayerInfoWidget : public UUMGLoadoutBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardAddFriendEvent OnTallyScoreboardAddFriendEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardReportEvent OnTallyScoreboardReportEvent;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImageHorizontalSeparation;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FTallyPlayerResultData PlayerResultData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool LoadoutIsBlocked;
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateReported();
    
    UFUNCTION(BlueprintCallable)
    void UpdateLoadout();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerScoreData(const FTallyPlayerResultData& resultData);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerReported(bool isReport);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerLoadoutBlocked(bool isBlock);
    
    UFUNCTION(BlueprintCallable)
    void HandleReportEvent(FName buttonID);
    
    UFUNCTION(BlueprintCallable)
    void HandleAddFriendEvent(FName buttonID);
    
    UUMGTallyScoreboardPlayerInfoWidget();
};

