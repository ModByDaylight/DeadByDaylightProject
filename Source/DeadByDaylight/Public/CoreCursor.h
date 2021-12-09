#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoreCursor.generated.h"

class UScaleBox;

UCLASS(Abstract, EditInlineNew)
class UCoreCursor : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UScaleBox* CursorScaleBox;
    
public:
    UCoreCursor();
};

