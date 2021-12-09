#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "SicknessSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class USicknessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FString _vomitingEnteredStatEvent;
    
    UPROPERTY(EditDefaultsOnly)
    float _hitByVomitTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isSick;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isVomiting;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasRecentlyBeenHitByVomit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isOpeningExitGate;
    
public:
    USicknessSurvivorSubAnimInstance();
};

