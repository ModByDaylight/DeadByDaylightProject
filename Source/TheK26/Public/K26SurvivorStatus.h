#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "K26SurvivorStatus.generated.h"

class AActor;
class AK26AttachedCrow;
class ACamperPlayer;
class UK26KillerInstinctStatusEffect;

USTRUCT(BlueprintType)
struct FK26SurvivorStatus {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool IsPowerAttached;
    
    UPROPERTY(Transient)
    bool IsAttachementAuraOn;
    
    UPROPERTY(NotReplicated, Transient)
    float LastAttachmentTime;
    
    UPROPERTY(NotReplicated, Transient)
    float LastDetachmentTime;
    
    UPROPERTY(NotReplicated, Transient)
    float LastRemovalStarted;
    
    UPROPERTY(NotReplicated, Transient)
    float LastRemovalStopped;
    
    UPROPERTY(NotReplicated, Transient)
    float LastHitTime;
    
    UPROPERTY(Transient)
    AK26AttachedCrow* StatusIndicator;
    
    UPROPERTY(Transient)
    ACamperPlayer* OwningSurvivor;
    
    UPROPERTY(Export, Transient)
    UK26KillerInstinctStatusEffect* K26KillerInstinctStatusEffect;
    
    UPROPERTY(Transient)
    TArray<AActor*> IdleCrowsBeingTouched;
    
    UPROPERTY(NotReplicated, Transient)
    FTimerHandle KillerInstinctTimeHandler;
    
    THEK26_API FK26SurvivorStatus();
};

