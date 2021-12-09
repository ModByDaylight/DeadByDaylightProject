#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MatchResultViewData.h"
#include "MatchResultViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UMatchResultViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IMatchResultViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidget(const FMatchResultViewData& data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimationSequence();
    
};

