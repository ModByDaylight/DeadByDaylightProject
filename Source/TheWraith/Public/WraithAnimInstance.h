#pragma once
#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "PerspectiveDependentAnimSequenceSelector.h"
#include "WraithAnimInstance.generated.h"

UCLASS(NonTransient)
class UWraithAnimInstance : public UKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isRingingBell;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isCloaking;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isUncloaking;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPerspectiveDependentAnimSequenceSelector _cloakingInSelector;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPerspectiveDependentAnimSequenceSelector _cloakingSelector;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPerspectiveDependentAnimSequenceSelector _cloakingOutSelector;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPerspectiveDependentAnimSequenceSelector _uncloakingInSelector;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPerspectiveDependentAnimSequenceSelector _uncloakingSelector;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPerspectiveDependentAnimSequenceSelector _uncloakingOutSelector;
    
    UPROPERTY(BlueprintReadOnly)
    float _cloakingPlayRate;
    
public:
    UWraithAnimInstance();
};

