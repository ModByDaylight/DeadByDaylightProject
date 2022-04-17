#pragma once
#include "CoreMinimal.h"
#include "StatusEffectViewData.h"
#include "UObject/Interface.h"
#include "StatusEffectViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStatusEffectViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStatusEffectViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowActiveStatusEffect(const FStatusEffectViewData& statusEffectData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveExistingStatusEffect(const FName& statusEffectId);
    
};

