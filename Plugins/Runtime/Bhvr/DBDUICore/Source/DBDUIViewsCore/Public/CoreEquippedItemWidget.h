#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "EquippedItemViewInterface.h"
#include "CoreEquippedItemWidget.generated.h"

class UAkAudioEvent;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreEquippedItemWidget : public UCoreBaseHudWidget, public IEquippedItemViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ItemDisappearSfx;
    
public:
    UCoreEquippedItemWidget();
    
    // Fix for true pure virtual functions not being implemented
};

