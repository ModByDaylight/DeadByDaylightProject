#pragma once
#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "UMGTallyScoreboardWidget.generated.h"

class UUMGTallyScoreboardPlayerInfoWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGTallyScoreboardWidgetOnTallyScoreboardAddFriendEvent, const FString&, playerID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGTallyScoreboardWidgetOnTallyScoreboardReportEvent, const FString&, playerID);

UCLASS(EditInlineNew)
class UUMGTallyScoreboardWidget : public UUMGTallyListElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGTallyScoreboardWidgetOnTallyScoreboardAddFriendEvent OnTallyScoreboardAddFriendEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUMGTallyScoreboardWidgetOnTallyScoreboardReportEvent OnTallyScoreboardReportEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText LabelTextRank;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText LabelTextScore;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText LabelTextStatus;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyScoreboardPlayerInfoWidget* KillerWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyScoreboardPlayerInfoWidget* FirstSurvivorWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyScoreboardPlayerInfoWidget* SecondSurvivorWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyScoreboardPlayerInfoWidget* ThirdSurvivorWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyScoreboardPlayerInfoWidget* FourthSurvivorWidget;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UUMGTallyScoreboardPlayerInfoWidget*> SurvivorWidgets;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetFadeOut();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleReportEvent(const FString& playerID);
    
    UFUNCTION(BlueprintCallable)
    void HandleAddFriendEvent(const FString& playerID);
    
    UUMGTallyScoreboardWidget();
};

