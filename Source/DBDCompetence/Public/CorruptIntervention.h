#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "CorruptIntervention.generated.h"

class AGenerator;

UCLASS()
class DBDCOMPETENCE_API UCorruptIntervention : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    uint8 _blockedGeneratorCount[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _generatorBlockDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _generatorAuraColorForKiller;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BlockedGenerators)
    TArray<AGenerator*> _blockedGenerators;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ActivatePerk();
    
    UFUNCTION()
    void OnRep_BlockedGenerators();
    
    UFUNCTION()
    void Local_OnIntroCompleted();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCorruptIntervention();
};

