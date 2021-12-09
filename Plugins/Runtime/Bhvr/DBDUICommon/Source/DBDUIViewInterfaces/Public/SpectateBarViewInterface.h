#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SpectateBarViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API USpectateBarViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ISpectateBarViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSpectatedName(const FString& playerName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSpectateBarVisibility(const bool isVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetArrowsVisibility(const bool isVisible);
    
};

