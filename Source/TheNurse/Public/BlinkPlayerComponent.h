#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "BlinkParams.h"
#include "BlinkPlayerComponent.generated.h"

class UCurveFloat;
class ACharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _maxBlinkDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _minBlinkDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _blinkFOVCurve;
    
public:
    UBlinkPlayerComponent();
private:
    UFUNCTION(Reliable, Server)
    void Server_StartBlink(const FBlinkParams& params);
    
    UFUNCTION(Reliable, Server)
    void Server_EndBlink();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartBlink(const FBlinkParams& params);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_EndBlink();
    
    UFUNCTION()
    void Local_OnMovementModeChanged(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode);
    
};

