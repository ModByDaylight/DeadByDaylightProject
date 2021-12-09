#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGShadersPrecompilingProgressionWidget.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGShadersPrecompilingProgressionWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* _progressBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* _progressionText;
    
public:
    UUMGShadersPrecompilingProgressionWidget();
};

