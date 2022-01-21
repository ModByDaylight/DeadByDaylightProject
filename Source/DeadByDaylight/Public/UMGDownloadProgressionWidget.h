#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "DownloadProgression.h"
#include "UMGDownloadProgressionWidget.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(EditInlineNew)
class UUMGDownloadProgressionWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* ProgressBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* DownloadPercentage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* DownloadDescription;
    
public:
    UUMGDownloadProgressionWidget();
    UFUNCTION()
    void UpdateProgression(const FDownloadProgression& downloadProgression);
    
};

