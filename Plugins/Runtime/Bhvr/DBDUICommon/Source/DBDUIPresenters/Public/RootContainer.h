#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIComponent.h"
#include "RootContainer.generated.h"

class UUserWidget;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API URootContainer : public UUIComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> RootWidgetClass;
    
    UPROPERTY(EditAnywhere)
    float UnfocusedOpacity;
    
    UPROPERTY(Export, Transient)
    UUserWidget* _rootWidget;
    
public:
    URootContainer();
};

