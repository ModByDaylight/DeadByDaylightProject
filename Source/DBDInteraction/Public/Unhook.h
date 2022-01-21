#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "Unhook.generated.h"

class USceneComponent;
class ADBDPlayer;
class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UUnhook : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TArray<USceneComponent*> _snapPoints;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _unhookLoudNoiseRange;
    
    UPROPERTY(Transient)
    ADBDPlayer* _unhookingPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    float _hookedCharacterSnapTime;
    
    UPROPERTY(Transient)
    ACamperPlayer* _playerBeingUnhooked;
    
public:
    UUnhook();
};

