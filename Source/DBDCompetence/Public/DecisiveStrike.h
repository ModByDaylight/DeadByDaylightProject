#pragma once
#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "DecisiveStrike.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDecisiveStrike : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _timeAfterUnhook[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _skillCheckDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float _skillCheckBuffer;
    
    UPROPERTY(EditDefaultsOnly)
    bool _killerHearsSkillCheckCue;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> _deactivationEvents;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HasBeenAttempted)
    bool _hasBeenAttempted;
    
public:
    UDecisiveStrike();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnUnhookedTimerEnded();
    
    UFUNCTION()
    void OnSkillCheck(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type);
    
    UFUNCTION()
    void OnRep_HasBeenAttempted();
    
    UFUNCTION()
    void OnPickUpEnded(ADBDPlayer* picker);
    
    UFUNCTION()
    void OnOwnerPickedUp(ADBDPlayer* picker);
    
};

