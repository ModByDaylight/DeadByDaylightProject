#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuestEventsHandlerUtilities.generated.h"

class UQuestEventsHandler;

UCLASS(BlueprintType)
class ARCHIVES_API UQuestEventsHandlerUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestEventsHandlerUtilities();
    UFUNCTION(BlueprintCallable)
    static void InitializeQuestEventHandler(UQuestEventsHandler* questEventsHandler);
    
};

