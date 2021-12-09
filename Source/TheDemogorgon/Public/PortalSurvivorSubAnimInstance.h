#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "SkillCheckFailureTracker.h"
#include "PortalSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UPortalSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public ISkillCheckFailureTracker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isDestroyingPortal;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isSpooked;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasSkillCheckFailed;
    
public:
    UPortalSurvivorSubAnimInstance();
};

