#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "RookieSpirit.generated.h"

class ADBDPlayer;
class AGenerator;

UCLASS()
class URookieSpirit : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_NumberOfGreatSkillChecksOnGeneratorRepair)
    int32 _numberOfGreatSkillChecksOnGeneratorRepair;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _numberOfGeneratorRepairGreatSkillChecksRequired[3];
    
    UFUNCTION()
    void OnRep_NumberOfGreatSkillChecksOnGeneratorRepair();
    
    UFUNCTION()
    void HandleGeneratorIsDamagedChanged(AGenerator* generator, ADBDPlayer* player);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    URookieSpirit();
};

