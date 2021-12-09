#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EndGameCollapseBarViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UEndGameCollapseBarViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IEndGameCollapseBarViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartEndGameScenario();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEndGameScenarioProgressionValue(const float amount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEndGameScenarioProgressionMode(const bool isSlowMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitEndGameScenario();
    
};

