#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SentryIoSubsystem.generated.h"

UCLASS()
class SENTRYIO_API USentryIoSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USentryIoSubsystem();
};

