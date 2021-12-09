#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyCharacterProgressionBar.generated.h"

class UProgressBar;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyCharacterProgressionBar : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* ProgressBar;
    
public:
    UUMGTallyCharacterProgressionBar();
};

