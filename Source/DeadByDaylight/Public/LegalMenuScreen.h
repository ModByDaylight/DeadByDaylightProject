#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "LegalMenuScreen.generated.h"

UCLASS()
class ULegalMenuScreen : public UScreenBase {
    GENERATED_BODY()
public:
    ULegalMenuScreen();
protected:
    UFUNCTION()
    void OnOkClick();
    
    UFUNCTION()
    void OnDeclineClick();
    
    UFUNCTION()
    void OnAcceptClick();
    
};

