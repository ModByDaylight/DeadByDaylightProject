#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SkillCheckViewData.h"
#include "SkillCheckViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API USkillCheckViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ISkillCheckViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateProgress(float value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePositionOffset(int32 x, int32 y);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSkillCheckSuccess(bool isBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSkillCheckFail();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSkillCheck(const FSkillCheckViewData& skillCheckData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideSkillCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyScaleFactor(float scale);
    
};

