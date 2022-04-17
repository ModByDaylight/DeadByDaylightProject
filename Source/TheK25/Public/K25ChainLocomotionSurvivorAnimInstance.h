#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "EK25ChainDetachmentReason.h"
#include "K25ChainAnchorAnimationData.h"
#include "EK25ChainAnchorPointDirection.h"
#include "K25SurvivorChainAttachmentData.h"
#include "K25ChainLocomotionSurvivorAnimInstance.generated.h"

class AK25Chain;
class UChargeableComponent;
class AK25SurvivorChainAttachmentAnchor;
class UK25SurvivorChainAttachmentComponent;

UCLASS(NonTransient)
class UK25ChainLocomotionSurvivorAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasChainsAttached;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _breakChainInteractionCompletionPercentage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isPerformingBreakChainInteraction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _forwardDirectionDotProductResult;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _lateralDirectionDotProductResult;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AK25Chain* _currentChainBeingDetached;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FK25ChainAnchorAnimationData _leftHandAttachmentData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FK25ChainAnchorAnimationData _rightHandAttachmentData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FK25ChainAnchorAnimationData _leftShoulderAttachmentData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FK25ChainAnchorAnimationData _rightShoulderAttachmentData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FK25ChainAnchorAnimationData _stomachAttachmentData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FK25ChainAnchorAnimationData _backAttachmentData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EK25ChainAnchorPointDirection _chainDirection;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EK25ChainAnchorPointDirection _lastDetatchedChainDirection;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasBrokenFreeFromChain;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _hasBrokenFreeTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasBeenHitByChain;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _hasBeenHitByChainTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 _numberOfChainsAttached;
    
public:
    UK25ChainLocomotionSurvivorAnimInstance();
private:
    UFUNCTION()
    void OnRemoveChainChargePercentageChanged(UChargeableComponent* chargeableComponent, float completionPercentage);
    
protected:
    UFUNCTION()
    void OnChainDetached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor, EK25ChainDetachmentReason detachmentReason);
    
    UFUNCTION()
    void OnChainAttached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor);
    
    UFUNCTION(BlueprintPure)
    bool IsSolvingLamentConfiguration() const;
    
    UFUNCTION(BlueprintPure)
    bool HasChainsAttached() const;
    
    UFUNCTION(BlueprintPure)
    UK25SurvivorChainAttachmentComponent* GetSurvivorChainAttachmentComponent() const;
    
    UFUNCTION(BlueprintPure)
    FK25SurvivorChainAttachmentData GetDetachingChainAnchorData() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AK25SurvivorChainAttachmentAnchor*> GetChainAttachmentAnchors() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnChainDetached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnChainAttached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor);
    
};

