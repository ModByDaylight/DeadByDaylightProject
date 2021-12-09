#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalletTracker.generated.h"

class USceneComponent;
class APallet;
class ASlasherPlayer;

UCLASS()
class DEADBYDAYLIGHT_API APalletTracker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    APallet* _procedurallySpawnedPallet;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    APallet* _dreamPallet;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* _indicatorLocation;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RevealToLocalPlayerBP(bool shown);
    
private:
    UFUNCTION()
    void InitializeTunableValues(ASlasherPlayer* slasher);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableSelectedEffectToLocalPlayer(bool activated);
    
    UFUNCTION(BlueprintPure)
    bool CanSpawnDreamPalletAtLocation() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APalletTracker();
};

