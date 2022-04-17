#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DemogorgonHuskAnimInstance.generated.h"

class APawn;
class UAnimSequence;
class ASlasherPlayer;
class UAnimMontage;
class UPortalPlacerStateComponent;

UCLASS(NonTransient)
class UDemogorgonHuskAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _teleportDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _teleportExitPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isSlowerExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _huskPortalSlowerExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _huskPortalExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* _demogorgonPortalExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* _demogorgonPortalEntry;
    
private:
    UPROPERTY(Transient)
    APawn* _owningPawn;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPortalPlacerStateComponent> _demogorgonPortalPlacerState;
    
public:
    UDemogorgonHuskAnimInstance();
private:
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
};

