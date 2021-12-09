#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "SubtitlesViewInterface.h"
#include "ESubtitlesPosition.h"
#include "SubtitlesEntry.h"
#include "Engine/EngineTypes.h"
#include "CoreSubtitlesWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSubtitlesWidget : public UCoreBaseUserWidget, public ISubtitlesViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* SubtitlesTB;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 NumberOfCharacterPerLine;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DurationPerLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool KeepSingleCharacter;
    
private:
    UPROPERTY(Transient)
    TArray<FSubtitlesEntry> _entryQueue;
    
    UPROPERTY(Transient)
    FTimerHandle _timerHandle;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubtitlesPosition(ESubtitlesPosition position);
    
private:
    UFUNCTION()
    void OnEntryTimedOut();
    
public:
    UCoreSubtitlesWidget();
};

