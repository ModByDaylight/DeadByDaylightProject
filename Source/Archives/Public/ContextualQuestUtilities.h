#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ContextualQuestUtilities.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType)
class ARCHIVES_API UContextualQuestUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UContextualQuestUtilities();
    UFUNCTION(BlueprintPure)
    static bool PlayerHasToCompleteAssociatedQuest(const ADBDPlayer* player, const FName specialBehaviourId);
    
    UFUNCTION(BlueprintPure)
    static bool PlayerHasAssociatedQuest(const ADBDPlayer* player, const FName specialBehaviourId);
    
};

