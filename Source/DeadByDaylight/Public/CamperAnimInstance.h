#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "ECamperGuidedAction.h"
#include "EInteractionAnimation.h"
#include "UObject/NoExportTypes.h"
#include "CamperAnimInstance.generated.h"

class ACamperPlayer;
class UAnimMontage;
class UAnimCompositeBase;
class USurvivorPlagueEffect;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API UCamperAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ACamperPlayer* CamperPlayer;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float MyDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsHooked;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsSacrificeStruggling;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* MontageMadnessTierUp;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimCompositeBase*> ArrayCarryAttackMontage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isFrightScreaming;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsBeingCarried;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsBeingPutOnHook;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsCrouched;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECamperGuidedAction GuidedAction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsTrapped;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsCrawling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsDead;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsInsideCloset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float IsPlayingMadnessTierUpWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsTotallyInsane;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsBeingKilled;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsCarryAttackSucess;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ShouldLookSleepy;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsUsingAimItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsHoldingAimItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool AllowLookAt;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DropStaggerTimeLeft;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LeftArmIKAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RightArmIKAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LeftForeArmIKAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RightForeArmIKAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform LeftHandIKTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform RightHandIKTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Strafe;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsInteracting;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Injured;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EInteractionAnimation InteractionType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EInteractionAnimation PreviousInteractionType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsSlasherInFPV;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CarriedAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsHoldingHandleItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsHoldingSmallItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsHoldingFirecracker;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Turning;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool InAir;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Direction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Pitch;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Yaw;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector RightFootEffectorLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector LeftFootEffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool Idle;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float MyTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool SkillCheckFailed;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsGassed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool HasAnyMontagePlaying;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName CurrentlyPlayerMontageId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsBeingCarriedByTheSpirit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsBeingCarriedByTheNightmare;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsBeingCarriedByThePig;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsBeingCarriedByTheHag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsBeingCarriedByTheLegion;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsBeingCarriedByTheGhostFace;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsUsingDeadHard;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsPlayingWakeUpOther;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsPlayingFreddyMori;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsSpooked;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsHealingKOCamper;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsChainLinked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsBeingReeled;
    
    UPROPERTY(BlueprintReadWrite)
    bool TriggerHarpoonHitAnim;
    
    UPROPERTY(BlueprintReadWrite)
    bool WasRecentlyHitByVomit;
    
    UPROPERTY(BlueprintReadOnly)
    float HarpoonHitTurnAnimNormalizedStartTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool HarpoonHitAnimTurnRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ChainBreakTrigger;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasLinkInput;
    
    UPROPERTY(BlueprintReadOnly)
    float LinkInputX;
    
    UPROPERTY(BlueprintReadOnly)
    float LinkInputY;
    
    UPROPERTY(EditAnywhere)
    float LinkedMaxSpeed;
    
private:
    UPROPERTY(Export, Transient)
    USurvivorPlagueEffect* _cachedSurvivorPlagueEffect;
    
public:
    UCamperAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetIsSacrificeStruggling(bool value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsGassed(bool value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAudioRummageAkEvent(FName distance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInfectiousFrightScream();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingMontageByName(FName montageId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddAudioRepairRateRadius(int32 distance);
    
};

