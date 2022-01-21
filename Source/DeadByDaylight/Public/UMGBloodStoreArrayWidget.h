#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBloodStoreArrayWidget.generated.h"

class UUMGBloodStoreRowWidget;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBloodStoreArrayWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreRowWidget* FirstBloodStoreRowWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreRowWidget* SecondBloodStoreRowWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreRowWidget* ThirdBloodStoreRowWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreRowWidget* FourthBloodStoreRowWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreRowWidget* FifthBloodStoreRowWidget;
    
public:
    UUMGBloodStoreArrayWidget();
private:
    UFUNCTION()
    void BroadcastBloodNodeSelected(const FString& id);
    
};

