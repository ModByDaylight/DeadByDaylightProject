#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TabWidgetData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTabWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 Key;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool ForcesIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FVector2D IconSize;
    
    DBDUIVIEWSCORE_API FTabWidgetData();
};

