#pragma once
#include "CoreMinimal.h"
#include "MontageEndedDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "AnimationMontageDescriptor.h"
#include "MontageStartedDelegateDelegate.h"
#include "MontageInstanceInfo.h"
#include "UObject/NoExportTypes.h"
#include "MontagePlayer.generated.h"

class UAnimMontage;
class UDataTable;
class USkeletalMeshComponent;
class UAnimInstance;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMontagePlayer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMontageStartedDelegate OnMontageStarted;
    
    UPROPERTY(BlueprintAssignable)
    FMontageEndedDelegate OnMontageEnded;
    
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
    UMontagePlayer();
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
    
};

