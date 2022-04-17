#pragma once
#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TwinJumpAttackOpenSubstate.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS()
class UTwinJumpAttackOpenSubstate : public UPounceAttackOpenSubstate {
    GENERATED_BODY()
public:
    UTwinJumpAttackOpenSubstate();
private:
    UFUNCTION()
    void Local_OnTwinOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& hit);
    
    UFUNCTION()
    void Local_OnTwinCapsuleHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit);
    
};

