#pragma once
#include "CoreMinimal.h"
#include "UIComponent.h"
#include "Components/SlateWrapperTypes.h"
#include "Presenter.generated.h"

class UUserWidget;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UPresenter : public UUIComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool RequestPresentationAtBeginPlay;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility InitialVisibility;
    
    UPROPERTY(Export, Transient)
    UUserWidget* _widget;
    
public:
    UPresenter();
};

