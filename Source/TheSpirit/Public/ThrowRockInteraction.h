#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "ThrowRockInteraction.generated.h"

UCLASS(EditInlineNew)
class UThrowRockInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _loudNoiseAudioRange;
    
    UPROPERTY(EditDefaultsOnly)
    float _scratchMarksApplicationDelay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _scratchMarksCountToSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    float _diversionHeightOffset;
    
public:
    UThrowRockInteraction();
};
