#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MontageInstanceInfo.h"
#include "Components/ActorComponent.h"
#include "AnimationMontageDescriptor.h"
#include "MontagePlayer.generated.h"

class UAnimMontage;
class UAnimInstance;
class USkeletalMeshComponent;
class UDataTable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMontagePlayerOnMontageStarted, const FAnimationMontageDescriptor, animMontageID, const float, PlayRate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMontagePlayerOnMontageEnded, const FAnimationMontageDescriptor, animMontageID, bool, interrupted);

UCLASS(BlueprintType, EditInlineNew)
class DEADBYDAYLIGHT_API UMontagePlayer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMontagePlayerOnMontageStarted OnMontageStarted;
    
    UPROPERTY(BlueprintAssignable)
    FMontagePlayerOnMontageEnded OnMontageEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* _animationMappingsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* _playerSpecificMappingsTable;
    
private:
    UPROPERTY(Transient)
    UAnimMontage* _currentlyPlayingMontage;
    
    UPROPERTY(Transient)
    TArray<FMontageInstanceInfo> _activeMontagesInfo;
    
    UPROPERTY(Transient)
    FName _outSectionName;
    
    UPROPERTY(Transient)
    float _timeBeforeOut;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* _skeletalMeshComponent;
    
    UPROPERTY(Transient)
    TMap<UAnimMontage*, FName> _montageToNameMap;
    
public:
    UFUNCTION(BlueprintCallable)
    void Stop(float blendOutTime);
    
private:
    UFUNCTION()
    void SignalAnimInstanceChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMesh(USkeletalMeshComponent* skeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float playRate);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayLoopForDuration(FAnimationMontageDescriptor animMontageID, float duration, float playRate, FName out);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* Play(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower);
    
private:
    UFUNCTION()
    void OnMontageEndedInternal(FGuid guid, UAnimMontage* montage, bool interrupted);
    
    UFUNCTION()
    void OnMontageBlendingOutInternal(FGuid guid, UAnimMontage* montage, bool interrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpToSectionEnd(FName sectionName);
    
    UFUNCTION(BlueprintCallable)
    void JumpToSection(FName sectionName);
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnyMontage() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying(FAnimationMontageDescriptor montageDescriptor) const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UMontagePlayer();
};

