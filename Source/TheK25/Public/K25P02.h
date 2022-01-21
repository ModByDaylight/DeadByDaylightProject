#pragma once
#include "CoreMinimal.h"
#include "DBDPlayerTotemPair.h"
#include "HexPerk.h"
#include "K25P02.generated.h"

class ADBDPlayer;
class ATotem;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25P02 : public UHexPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _totemAuraRevealRadius[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _totemBlockerHasLifetime;
    
    UPROPERTY(EditDefaultsOnly)
    float _totemBlockerDuration[3];
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CursedSurvivors)
    TArray<FDBDPlayerTotemPair> _cursedSurvivors;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _hookedSurvivors;
    
    UPROPERTY(Transient)
    TArray<ATotem*> _previouslyBoundTotems;
    
    UPROPERTY(Transient)
    FDBDPlayerTotemPair _lastPlayerTotemPair;
    
public:
    UK25P02();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_CursedSurvivors();
    
};

