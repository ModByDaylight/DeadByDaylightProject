#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyProgressBar.generated.h"

class UProgressBar;
class UCanvasPanel;
class UUMGTallyPip;

UCLASS(EditInlineNew)
class UUMGTallyProgressBar : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* ProgressBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* PipsContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<UUMGTallyPip>> _pipsClasses;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D _pipsAlignment;
    
public:
    UUMGTallyProgressBar();
    UFUNCTION(BlueprintCallable)
    void SetPercent(float value);
    
    UFUNCTION(BlueprintPure)
    int32 GetPipsCount() const;
    
};

