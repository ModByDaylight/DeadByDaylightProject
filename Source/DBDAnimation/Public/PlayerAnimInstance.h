#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Animation/AnimInstance.h"
#include "Activatable.h"
#include "TaggedAnimCollection.h"
#include "GameplayTagContainer.h"
#include "AnimSequenceSelector.h"
#include "ActivationDefinition.h"
#include "PlayerAnimInstance.generated.h"

class ADBDPlayer;
class UAnimEffectBlackBoard;
class UAnimEffectHandler;
class UAnimSequence;
class UBlendSpace;
class UAimOffsetBlendSpace;
class UBlendSpace1D;
class UAimOffsetBlendSpace1D;

UCLASS(NonTransient)
class DBDANIMATION_API UPlayerAnimInstance : public UAnimInstance, public IActivatable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ADBDPlayer* _owningPlayer;
    
    UPROPERTY(Transient)
    UAnimEffectBlackBoard* _animEffectBlackBoard;
    
    UPROPERTY(Transient)
    UAnimEffectHandler* _animEffectHandlerForSFX;
    
    UPROPERTY(Transient)
    UAnimEffectHandler* _animEffectHandlerForVFX;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForSFX;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForVFX;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTaggedAnimCollection> _taggedAnimCollections;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<FGameplayTag, UAnimSequence*> _animations;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<FGameplayTag, UBlendSpace*> _blendspaces;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<FGameplayTag, UAimOffsetBlendSpace*> _aimoffsets;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<FGameplayTag, UBlendSpace1D*> _blendspaces1d;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<FGameplayTag, UAimOffsetBlendSpace1D*> _aimoffsets1d;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<FGameplayTag, FAnimSequenceSelector> _selectors;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInParadise;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isIntroCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isLevelReadyToPlay;
    
    UPROPERTY(EditDefaultsOnly)
    FActivationDefinition _activationDefinition;
    
    UPROPERTY(BlueprintReadOnly)
    float _interactionDuration;
    
public:
    UPlayerAnimInstance();
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION()
    void OnIntroCompleted();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasBeenNotified(const FName animNotify) const;
    
protected:
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetOwningPlayer() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

