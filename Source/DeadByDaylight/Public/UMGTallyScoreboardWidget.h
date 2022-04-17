#pragma once
#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "OnTallyScoreboardAddFriendEventDelegate.h"
#include "OnTallyScoreboardReportEventDelegate.h"
#include "UMGTallyScoreboardWidget.generated.h"

class UUMGTallyScoreboardPlayerInfoWidget;

UCLASS(EditInlineNew)
class UUMGTallyScoreboardWidget : public UUMGTallyListElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnTallyScoreboardAddFriendEvent OnTallyScoreboardAddFriendEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnTallyScoreboardReportEvent OnTallyScoreboardReportEvent;
    
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
    
public:
    UUMGTallyScoreboardWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetFadeOut();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleReportEvent(const FString& playerID);
    
    UFUNCTION(BlueprintCallable)
    void HandleAddFriendEvent(const FString& playerID);
    
};

