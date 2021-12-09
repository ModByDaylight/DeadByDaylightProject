#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "ThrillingTremors.generated.h"

class AGenerator;

UCLASS()
class DBDCOMPETENCE_API UThrillingTremors : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    int32 _cooldownByLevel[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _durationByLevel[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _disableWhenSurvivorPutDownOrUnhooked;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _generatorAuraColorForKiller;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BlockedGenerators)
    TArray<AGenerator*> _blockedGenerators;
    
    UPROPERTY(Transient)
    TArray<AGenerator*> _revealedGenerators;
    
    UFUNCTION()
    void OnRep_BlockedGenerators();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UThrillingTremors();
};

