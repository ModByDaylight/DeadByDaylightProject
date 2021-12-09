#pragma once
#include "CoreMinimal.h"
#include "ToastButton.generated.h"

USTRUCT(BlueprintType)
struct FToastButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ButtonText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsRegression;
    
    DEADBYDAYLIGHT_API FToastButton();
};

