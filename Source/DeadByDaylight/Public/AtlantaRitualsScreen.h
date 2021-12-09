#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaRitualsScreen.generated.h"

class UUMGAtlantaRitualsScreen;

UCLASS()
class UAtlantaRitualsScreen : public UScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UUMGAtlantaRitualsScreen* _umgScreen;
    
    UFUNCTION()
    void OnRefreshRitual();
    
    UFUNCTION()
    void OnExitRequested();
    
    UFUNCTION()
    void OnClaimRewards(int32 ritualId);
    
public:
    UAtlantaRitualsScreen();
};

