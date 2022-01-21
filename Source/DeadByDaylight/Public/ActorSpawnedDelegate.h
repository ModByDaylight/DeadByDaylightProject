#pragma once
#include "CoreMinimal.h"
#include "ActorSpawnedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorSpawnedDelegate, AActor*, actorSpawned);

