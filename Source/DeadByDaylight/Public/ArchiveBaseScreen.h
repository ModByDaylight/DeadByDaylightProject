#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "ArchiveBaseScreen.generated.h"

UCLASS()
class UArchiveBaseScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UArchiveBaseScreen();
private:
    UFUNCTION()
    void OnTabSelected(int32 index);
    
    UFUNCTION()
    void OnSelectHelpButton() const;
    
};

