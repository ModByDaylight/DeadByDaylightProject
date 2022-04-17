#pragma once
#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "AspectRatioBox.generated.h"

UCLASS()
class DBDUIVIEWSCORE_API UAspectRatioBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AspectRatio;
    
    UPROPERTY(EditAnywhere)
    uint8 IsAspectRatioOverridden: 1;
    
    UAspectRatioBox();
    UFUNCTION(BlueprintCallable)
    void SetAspectRatio(float inAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void ClearAspectRatio();
    
};

