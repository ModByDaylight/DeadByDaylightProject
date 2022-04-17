#pragma once
#include "CoreMinimal.h"
#include "DBDCharacterMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "ECamperDamageState.h"
#include "CamperMovementComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCamperMovementComponent : public UDBDCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxCrawlSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRunSpeed;
    
protected:
    UPROPERTY(Transient)
    FRotator _defaultRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator _rotationRateWhileCrawling;
    
public:
    UCamperMovementComponent();
    UFUNCTION()
    void OnCamperHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotationRateWhileCrawling() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetDefaultRotationRate() const;
    
};

