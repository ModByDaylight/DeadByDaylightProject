#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HudPresenter.h"
#include "SkillCheckPresenter.generated.h"

class UUserWidget;

UCLASS(BlueprintType)
class DBDUIPRESENTERS_API USkillCheckPresenter : public UHudPresenter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> SkillCheckWidgetClass;
    
private:
    UFUNCTION()
    void OnUpdateSkillCheckVisual(bool isActive);
    
    UFUNCTION()
    void OnShowSkillCheckSuccess(bool isBonus);
    
    UFUNCTION()
    void OnShowSkillCheckFail();
    
    UFUNCTION()
    void OnShowSkillCheck();
    
public:
    USkillCheckPresenter();
};

