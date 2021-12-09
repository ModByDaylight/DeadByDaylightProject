#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ECustomizationCategory.h"
#include "AnimNotifyState_HideCustomizationAttachments.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class DEADBYDAYLIGHT_API UAnimNotifyState_HideCustomizationAttachments : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECustomizationCategory Category;
    
    UAnimNotifyState_HideCustomizationAttachments();
};

