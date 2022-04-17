#pragma once
#include "CoreMinimal.h"
#include "AtlantaTutorialLevel.h"
#include "EKillerTutorialEndGameType.h"
#include "KillerAtlantaTutorialLevel.generated.h"

class ASlasherPlayer;
class AEscapeDoor;
class ACamperPlayer;
class AGenerator;
class AHatch;
class AWindow;

UCLASS()
class DEADBYDAYLIGHT_API AKillerAtlantaTutorialLevel : public AAtlantaTutorialLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<ASlasherPlayer> LocallyControllerSlasherPlayer;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<ACamperPlayer> ChaseCamper;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<ACamperPlayer> BearTrapCamper;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AGenerator> KickGenerator;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AWindow> VaultWindow;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AEscapeDoor> EscapeDoor;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AHatch> Hatch;
    
    AKillerAtlantaTutorialLevel();
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerExitGameSetup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerEndGameSequenceAnimation(EKillerTutorialEndGameType camperDeathType);
    
    UFUNCTION(BlueprintCallable)
    void SetVaultWindow(AWindow* window);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupEndGameTutorialPhase();
    
    UFUNCTION(BlueprintCallable)
    void SetHatch(AHatch* targetHatch);
    
    UFUNCTION(BlueprintCallable)
    void SetGenerator(AGenerator* generator);
    
    UFUNCTION(BlueprintCallable)
    void SetEscapeDoor(AEscapeDoor* targetEscapeDoor);
    
    UFUNCTION(BlueprintCallable)
    void SetControlledSlasherPlayer(ASlasherPlayer* slasherPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetChaseSurvivor(ACamperPlayer* camperPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetBearTrapSurvivor(ACamperPlayer* camperPlayer);
    
    UFUNCTION(BlueprintCallable)
    void CompleteEscapeRequirements();
    
};

