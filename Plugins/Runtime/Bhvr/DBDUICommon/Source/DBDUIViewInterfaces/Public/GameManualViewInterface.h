#pragma once
#include "CoreMinimal.h"
#include "HelpTopicData.h"
#include "UObject/Interface.h"
#include "HelpCategoryData.h"
#include "EGameManualMenuState.h"
#include "GameManualViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UGameManualViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IGameManualViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentManualMenuState(const EGameManualMenuState menuState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCategoryData(const FHelpCategoryData categoryData, const TArray<FHelpTopicData>& topicsData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGameManualMenuState GetCurrentManualMenuState() const;
    
};

