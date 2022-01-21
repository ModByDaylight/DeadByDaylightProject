#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SmallGame.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USmallGame : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _detectionConeAngle[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _detectionConeAngleReductionRate[3];
    
    UPROPERTY(BlueprintReadOnly)
    bool _totemDetected;
    
public:
    USmallGame();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void VFXTotemFound();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SearchForTotems();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TotemFound();
    
private:
    UFUNCTION(BlueprintPure)
    float GetDetectionConeAngle() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetTotemDetected(bool value);
    
};

