#pragma once
#include "CoreMinimal.h"
#include "ModifierSubjectProvider.h"
#include "TwinSubjectProvider.generated.h"

class AConjoinedTwin;
class ASlasherPlayer;

UCLASS()
class UTwinSubjectProvider : public UModifierSubjectProvider {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
    UFUNCTION()
    void ListenToTwinSet(ASlasherPlayer* killer);
    
public:
    UTwinSubjectProvider();
};

