#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "Types/SlateEnums.h"
#include "UMGPlayerNameInputPopup.generated.h"

class UEditableTextBox;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPlayerNameInputPopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UEditableTextBox* NameInputTextBox;
    
public:
    UUMGPlayerNameInputPopup();
    UFUNCTION(BlueprintCallable)
    void NameCommitted(const FText& name, TEnumAsByte<ETextCommit::Type> commitType);
    
    UFUNCTION(BlueprintCallable)
    void NameChanged(const FText& name);
    
};

