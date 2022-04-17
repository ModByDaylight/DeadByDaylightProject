#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GeneratorDrivenActor.generated.h"

class ADBDPlayer;
class AGenerator;

UCLASS(Config=Game)
class DEADBYDAYLIGHT_API AGeneratorDrivenActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float LightPriority;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EComponentMobility::Type> TargetMobileLightMobility;
    
private:
    UPROPERTY(Transient)
    TArray<bool> _activated;
    
    UPROPERTY(Transient)
    TArray<AGenerator*> _generators;
    
public:
    AGeneratorDrivenActor();
    UFUNCTION(BlueprintCallable)
    void SetSpawnedObject(AGenerator* generator, int32 generatorId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitGeneratorDrivenActor(AGenerator* generator, int32 generatorId);
    
private:
    UFUNCTION()
    void OnGeneratorRepairedEvent6(bool isAutoCompleted);
    
    UFUNCTION()
    void OnGeneratorRepairedEvent5(bool isAutoCompleted);
    
    UFUNCTION()
    void OnGeneratorRepairedEvent4(bool isAutoCompleted);
    
    UFUNCTION()
    void OnGeneratorRepairedEvent3(bool isAutoCompleted);
    
    UFUNCTION()
    void OnGeneratorRepairedEvent2(bool isAutoCompleted);
    
    UFUNCTION()
    void OnGeneratorRepairedEvent1(bool isAutoCompleted);
    
    UFUNCTION()
    void OnGeneratorRepairedEvent0(bool isAutoCompleted);
    
    UFUNCTION()
    void OnGeneratorRepairedBySurvivorEvent6(ADBDPlayer* repairingSurvivor);
    
    UFUNCTION()
    void OnGeneratorRepairedBySurvivorEvent5(ADBDPlayer* repairingSurvivor);
    
    UFUNCTION()
    void OnGeneratorRepairedBySurvivorEvent4(ADBDPlayer* repairingSurvivor);
    
    UFUNCTION()
    void OnGeneratorRepairedBySurvivorEvent3(ADBDPlayer* repairingSurvivor);
    
    UFUNCTION()
    void OnGeneratorRepairedBySurvivorEvent2(ADBDPlayer* repairingSurvivor);
    
    UFUNCTION()
    void OnGeneratorRepairedBySurvivorEvent1(ADBDPlayer* repairingSurvivor);
    
    UFUNCTION()
    void OnGeneratorRepairedBySurvivorEvent0(ADBDPlayer* repairingSurvivor);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor, int32 generatorId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateGeneratorDrivenActor(bool isAutoCompleted, int32 generatorId);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_GeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor, int32 generatorId);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ActivationChecked(bool activated, bool isAutoCompleted, int32 generatorId);
    
private:
    UFUNCTION()
    bool IsValidGeneratorId(int32 generatorId) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActivated(int32 generatorId) const;
    
    UFUNCTION(BlueprintCallable)
    FRandomStream GetSharedTileRandomizer();
    
    UFUNCTION()
    void Authority_CheckGeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor, int32 generatorId);
    
    UFUNCTION()
    void Authority_CheckActivation(bool isAutoCompleted, int32 generatorId);
    
};

