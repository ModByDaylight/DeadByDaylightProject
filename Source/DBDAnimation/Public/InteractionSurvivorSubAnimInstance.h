#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "EInteractionAnimation.h"
#include "UObject/NoExportTypes.h"
#include "InteractionSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UInteractionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isAgainstSmallKiller;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInsideCloset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isEnteringCloset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isBeingCarried;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isHooked;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isSacrificeStruggling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _sacrificeStrugglePercent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _selfUnhookFailed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EInteractionAnimation _interactionAnimation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector _snapPosition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInteractingWithEscapeDoor;
    
public:
    UInteractionSurvivorSubAnimInstance();
};

