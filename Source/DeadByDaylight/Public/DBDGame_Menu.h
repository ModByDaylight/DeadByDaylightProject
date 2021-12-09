#pragma once
#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDGame_Menu.generated.h"

class UAtlantaPartyFlowHandler;
class AMatineeActor;

UCLASS(NonTransient)
class ADBDGame_Menu : public ADBDBaseGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool StartWithSlasher;
    
private:
    UPROPERTY(Transient)
    UAtlantaPartyFlowHandler* _partyFlowHandler;
    
    UPROPERTY(Transient)
    AMatineeActor* _matineeFadeActor;
    
    UPROPERTY(Transient)
    AMatineeActor* _matineeIntroActor;
    
    UPROPERTY(Transient)
    AMatineeActor* _matineeLoopActor;
    
public:
    ADBDGame_Menu();
};

