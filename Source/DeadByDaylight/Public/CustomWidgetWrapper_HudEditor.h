#pragma once
#include "CoreMinimal.h"
#include "HudEditorDragFromParentAxisLimit.h"
#include "CustomWidgetWrapper.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "CustomWidgetWrapper_HudEditor.generated.h"

class UCustomWidgetWrapper_HudEditor;
class UWidget;

UCLASS()
class DEADBYDAYLIGHT_API UCustomWidgetWrapper_HudEditor : public UCustomWidgetWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NbVersions;
    
    UPROPERTY(EditAnywhere)
    float HideUnderOpacity;
    
    UPROPERTY(EditAnywhere)
    FColor HiddenStatusTintColor;
    
    UPROPERTY(EditAnywhere)
    float HiddenStatusOpacity;
    
    UPROPERTY(EditAnywhere)
    float OverlapAboveSizeRatio;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer IgnoreOverlapIds;
    
    UPROPERTY(EditAnywhere)
    FHudEditorDragFromParentAxisLimit ParentDragLimitX;
    
    UPROPERTY(EditAnywhere)
    FHudEditorDragFromParentAxisLimit ParentDragLimitY;
    
    UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly)
    bool IsEditingHudByInput;
    
    UPROPERTY(EditAnywhere)
    FColor OverlapStatusTintColor;
    
    UCustomWidgetWrapper_HudEditor();
    UFUNCTION(BlueprintPure)
    float GetScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetOpacity() const;
    
    UFUNCTION(BlueprintCallable)
    void FlipScreenPosition();
    
    UFUNCTION(BlueprintCallable)
    void FlipPositionWithChildLinkWidget();
    
    UFUNCTION(BlueprintCallable)
    void ClampToViewport();
    
    UFUNCTION(BlueprintPure)
    bool CanEditScale() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEditOpacity() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyScaleWithOverlappingWrappers(float scale, UWidget* widget, const TArray<UCustomWidgetWrapper_HudEditor*>& allEditableWrappers, bool needDetectOverlapping);
    
    UFUNCTION(BlueprintCallable)
    void AddToTranslation(FVector2D translation);
    
};

