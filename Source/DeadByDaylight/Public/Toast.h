#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EToastInputType.h"
#include "ToastButton.h"
#include "Toast.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FToast : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DisplayDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Lifetime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ToastText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EToastInputType, FToastButton> ButtonsData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayBeforeInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> ToastIcon;
    
    DEADBYDAYLIGHT_API FToast();
};

