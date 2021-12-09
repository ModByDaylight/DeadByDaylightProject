#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "InteractionAnimNotify.generated.h"

UCLASS(CollapseCategories)
class DEADBYDAYLIGHT_API UInteractionAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NotifyID;
    
    UInteractionAnimNotify();
};

