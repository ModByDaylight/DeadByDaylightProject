#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGLacerationStatusEffectUI.generated.h"

class UImage;
class UTexture2D;
class UPaperSprite;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLacerationStatusEffectUI : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* LacerationDecoration;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* LacerationFill;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> _maximumLacerationDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UPaperSprite*> _lacerationDecorationImages;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTexture2D*> _lacerationFillImages;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _lacerationDefaultColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _lacerationFillFullColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _glassShatterDisintigrateAnimationName;
    
public:
    UUMGLacerationStatusEffectUI();
private:
    UFUNCTION()
    void OnFinishedBoomAnimation();
    
};

