#pragma once
#include "CoreMinimal.h"
#include "TotemBoundPerk.h"
#include "EDBDScoreTypes.h"
#include "HexPerk.generated.h"

class ADBDPlayer;
class AActor;
class ATotem;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHexPerk : public UTotemBoundPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PlayersWhoKnowCurse)
    TArray<ADBDPlayer*> _playersWhoKnowCurse;
    
public:
    UHexPerk();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCursedStatusViewOnLocalPlayer();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void ReceiveGameplayEvent(EDBDScoreTypes gameplayEventType, float amount, AActor* instigator, AActor* target);
    
private:
    UFUNCTION()
    void OnRep_PlayersWhoKnowCurse(const TArray<ADBDPlayer*> oldPlayersWhoKnowCurse);
    
public:
    UFUNCTION()
    void OnHexPerkGameplayEvent(EDBDScoreTypes gameplayEventType, float amount, AActor* instigator, AActor* target);
    
    UFUNCTION(BlueprintPure)
    bool IsCurseRevealedToPlayer(const ADBDPlayer* player) const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetCurseRevealedToPlayer(ADBDPlayer* player, const bool revealed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RevealCurseToAllSurvivors(bool revealed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Authority_Reactivate_BP(ATotem* totem);
    
};

