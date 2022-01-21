#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "RoleSelectionScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API URoleSelectionScreen : public UScreenBase {
    GENERATED_BODY()
public:
    URoleSelectionScreen();
private:
    UFUNCTION()
    void OnChangeUserButtonClick();
    
    UFUNCTION()
    void OnButtonSelected(int32 buttonId);
    
};

