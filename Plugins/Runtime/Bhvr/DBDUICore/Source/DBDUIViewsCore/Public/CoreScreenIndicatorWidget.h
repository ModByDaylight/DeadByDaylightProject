#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ScreenIndicatorViewData.h"
#include "UObject/NoExportTypes.h"
#include "CoreScreenIndicatorWidget.generated.h"

UCLASS(EditInlineNew)
class UCoreScreenIndicatorWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float InactiveTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D IndicatorPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D DistanceClamping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDistanceRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDistanceAlpha;
    
    UCoreScreenIndicatorWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FScreenIndicatorViewData& data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearData();
    
};

