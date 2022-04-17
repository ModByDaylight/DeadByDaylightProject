#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharmSlot.h"
#include "UObject/NoExportTypes.h"
#include "CharmSpawnerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCharmSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SocketRootName;
    
    UPROPERTY(EditAnywhere)
    TArray<FCharmSlot> CharmSlots;
    
    UPROPERTY(EditAnywhere)
    FVector ScaleCharm;
    
private:
    UPROPERTY(EditAnywhere)
    int32 _forcedLOD;
    
public:
    UCharmSpawnerComponent();
};

