#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELeanState.h"
#include "LeaningArrowsViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API ULeaningArrowsViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ILeaningArrowsViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const ELeanState& leanState);
    
};

