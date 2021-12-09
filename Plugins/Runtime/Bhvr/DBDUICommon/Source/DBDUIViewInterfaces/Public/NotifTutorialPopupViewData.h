#pragma once
#include "CoreMinimal.h"
#include "NotifTutorialPopupViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FNotifTutorialPopupViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TSoftObjectPtr<UTexture2D> Image;
    
    DBDUIVIEWINTERFACES_API FNotifTutorialPopupViewData();
};

