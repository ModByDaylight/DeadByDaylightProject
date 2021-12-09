#pragma once
#include "CoreMinimal.h"
#include "SkillCheckDefinition.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FSkillCheckDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float SuccessZoneStart;
    
    UPROPERTY(Transient)
    float SuccessZoneEnd;
    
    UPROPERTY(Transient)
    float BonusZoneLength;
    
    UPROPERTY(Transient)
    float BonusZoneStart;
    
    UPROPERTY(Transient)
    float ProgressRate;
    
    UPROPERTY(Transient)
    float StartingTickerPosition;
    
    UPROPERTY(Transient)
    bool IsDeactivatedAfterResponse;
    
    UPROPERTY(Transient)
    float WarningSoundDelay;
    
    UPROPERTY(Transient)
    bool IsAudioMuted;
    
    UPROPERTY(Transient)
    bool IsJittering;
    
    UPROPERTY(Transient)
    bool IsSuccessZoneMirrorred;
    
    UPROPERTY(Transient)
    bool IsInsane;
    
    FSkillCheckDefinition();
};

