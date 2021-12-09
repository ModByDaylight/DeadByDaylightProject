#pragma once
#include "CoreMinimal.h"
#include "QuestEventsHandler.h"
#include "QuestEventsHandlerTest.generated.h"

class ADBDPlayer;

UCLASS()
class ARCHIVES_API UQuestEventsHandlerTest : public UQuestEventsHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ADBDPlayer* _dbdplayer;
    
public:
    UQuestEventsHandlerTest();
};

