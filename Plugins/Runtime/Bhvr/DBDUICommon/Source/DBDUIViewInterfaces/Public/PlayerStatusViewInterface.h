#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerStatusViewData.h"
#include "GameplayTagContainer.h"
#include "PlayerStatusViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPlayerStatusViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPlayerStatusViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerAfflictionHit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTimerProgress(float value, bool isDeepWound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerNameVisibility(bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetKiller(FGameplayTag killerTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const FPlayerStatusViewData& data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayTimerAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayHookEscapeFailedAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();
    
};

