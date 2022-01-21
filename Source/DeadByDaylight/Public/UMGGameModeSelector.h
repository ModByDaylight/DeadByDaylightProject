#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EGameplayMode.h"
#include "UMGGameModeSelector.generated.h"

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGGameModeSelector : public UUserWidget {
    GENERATED_BODY()
public:
    UUMGGameModeSelector();
protected:
    UFUNCTION(BlueprintCallable)
    void SetGameplayMode(EGameplayMode mode);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetActiveGameplayMode(EGameplayMode mode, bool visible);
    
};

