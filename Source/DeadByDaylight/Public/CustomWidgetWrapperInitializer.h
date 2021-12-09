#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CustomWidgetWrapperInitializer.generated.h"

class UCustomWidgetWrapper;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UCustomWidgetWrapperInitializer : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UCustomWidgetWrapper* ListeningWrapper;
    
public:
    UCustomWidgetWrapperInitializer();
};

