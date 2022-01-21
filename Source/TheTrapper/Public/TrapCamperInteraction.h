#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "TrapCamperInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTrapCamperInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FString> _nonOverridableInteractions;
    
    UPROPERTY(EditAnywhere)
    FName _trapAttachSocket;
    
    UPROPERTY(EditAnywhere)
    FName _updateMontageID;
    
    UPROPERTY(EditAnywhere)
    FName _updateNoScreamMontageID;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _loudNoiseRangeTunable;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _hemorrhageEffectDurationTunable;
    
public:
    UTrapCamperInteraction();
};

