#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EOnboardingMenuState.h"
#include "OnboardingMenuViewInterface.generated.h"

class UGameManualViewInterface;
class IGameManualViewInterface;
class UOnboardingTutorialViewInterface;
class IOnboardingTutorialViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UOnboardingMenuViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IOnboardingMenuViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUIEnabled(bool enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOnboardingMenuState(EOnboardingMenuState state);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFirstTimeUserExperience(bool ftue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IOnboardingTutorialViewInterface> GetOnboardingTutorialInterface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IGameManualViewInterface> GetGameManualInterface() const;
    
};

