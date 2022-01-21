#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "RookieSpirit.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class URookieSpirit : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_NumberOfGreatSkillChecksOnGeneratorRepair)
    int32 _numberOfGreatSkillChecksOnGeneratorRepair;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _numberOfGeneratorRepairGreatSkillChecksRequired[3];
    
public:
    URookieSpirit();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_NumberOfGreatSkillChecksOnGeneratorRepair();
    
    UFUNCTION()
    void HandleGeneratorIsDamagedChanged(AGenerator* generator, ADBDPlayer* player);
    
};

