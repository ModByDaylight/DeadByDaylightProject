#pragma once
#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingTutorialContextWidget.generated.h"

class UUMGSettingContextButton;

UCLASS(Abstract, EditInlineNew)
class UUMGSettingTutorialContextWidget : public UUMGSettingContextWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGSettingContextButton* SurvivorTutorialButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGSettingContextButton* KillerTutorialButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGSettingContextButton* SurvivorCinematicButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGSettingContextButton* KillerCinematicButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGSettingContextButton* LoreCinematicButton;
    
public:
    UUMGSettingTutorialContextWidget();
};

