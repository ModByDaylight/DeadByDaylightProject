#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERichPresenceUserType.h"
#include "ERichPresenceStatus.h"
#include "DBDRichPresenceSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDRichPresenceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ERichPresenceUserType _userType;
    
    UPROPERTY(Transient)
    ERichPresenceStatus _richPresenceStatus;
    
    UPROPERTY(Transient)
    float _timerRate;
    
    UPROPERTY(Transient)
    float _timerDelay;
    
    UPROPERTY(Transient)
    bool _isValidSetup;
    
public:
    UDBDRichPresenceSubsystem();
};

