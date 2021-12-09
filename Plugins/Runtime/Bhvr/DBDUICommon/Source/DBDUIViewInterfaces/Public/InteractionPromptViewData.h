#pragma once
#include "CoreMinimal.h"
#include "EInteractionPromptType.h"
#include "InputCoreTypes.h"
#include "InteractionPromptViewData.generated.h"

USTRUCT(BlueprintType)
struct FInteractionPromptViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionPromptType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey InputKey1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey InputKey2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey InputKey3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey InputKey4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PlaceInCenter;
    
    DBDUIVIEWINTERFACES_API FInteractionPromptViewData();
};

