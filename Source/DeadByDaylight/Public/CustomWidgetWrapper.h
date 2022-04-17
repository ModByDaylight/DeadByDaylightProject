#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "GameplayTagContainer.h"
#include "OnVersionDelegateDelegate.h"
#include "CustomWidgetWrapper.generated.h"

class UCustomWidgetWrapper;
class UCustomWidgetWrapperInitializer;

UCLASS(Abstract)
class DEADBYDAYLIGHT_API UCustomWidgetWrapper : public UCanvasPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnVersionDelegate OnVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Id;
    
    UPROPERTY(EditAnywhere, Export)
    UCustomWidgetWrapper* ManuallyParentWrapper;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UCustomWidgetWrapper*> ManuallyChildWrappers;
    
    UPROPERTY(Export, Transient)
    UCustomWidgetWrapperInitializer* InitializerWidget;
    
    UCustomWidgetWrapper();
    UFUNCTION(BlueprintCallable)
    void ApplyVersion(int32 version);
    
    UFUNCTION(BlueprintCallable)
    void ApplyScale(float scale);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOpacity(float opacity);
    
};

