#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SentryIoBaseSubsystem.generated.h"

UCLASS(Abstract)
class SENTRYIO_API USentryIoBaseSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USentryIoBaseSubsystem();
};

