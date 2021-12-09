#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StreamVideoSubsystem.generated.h"

class UStreamVideoManager;
class UStreamVideoFactory;

UCLASS()
class DEADBYDAYLIGHT_API UStreamVideoSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UStreamVideoManager* StreamVideoManager;
    
    UPROPERTY(Transient)
    UStreamVideoFactory* StreamVideoFactory;
    
    UStreamVideoSubsystem();
};

