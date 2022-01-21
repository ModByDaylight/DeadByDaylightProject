#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESubtitlesBackgroundOpacity.h"
#include "ESubtitlesPosition.h"
#include "ESubtitlesSize.h"
#include "SubtitlesViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API USubtitlesViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ISubtitlesViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSubtitles(const FText& subtitleText, ESubtitlesPosition position);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubtitlesSize(ESubtitlesSize size);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubtitlesBackgroundOpacity(ESubtitlesBackgroundOpacity opacity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideSubtitles();
    
};

