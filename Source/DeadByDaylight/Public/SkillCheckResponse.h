#pragma once
#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "SkillCheckResponse.generated.h"

class UChargeableInteractionDefinition;

USTRUCT(BlueprintType)
struct FSkillCheckResponse {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float ChargeChange;
    
    UPROPERTY(Transient)
    bool IsTriggeredByInput;
    
    UPROPERTY(Transient)
    bool IsSuccessful;
    
    UPROPERTY(Transient)
    bool IsBonus;
    
    UPROPERTY(Transient)
    bool IsInsane;
    
    UPROPERTY(Transient)
    bool IsTriggeringLoudNoise;
    
    UPROPERTY(Transient)
    bool FailedCountedAsGood;
    
    UPROPERTY(Transient)
    ESkillCheckCustomType Type;
    
    UPROPERTY(Export, Transient)
    UChargeableInteractionDefinition* Interaction;
    
    UPROPERTY(Transient)
    uint32 VerificationKey;
    
    DEADBYDAYLIGHT_API FSkillCheckResponse();
};

