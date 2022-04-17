#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StalkerComponent.generated.h"

class UChargeableComponent;
class UStalkedComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStalkerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStalkPointsAdded, float, stalkPoints);
    
private:
    UPROPERTY(EditAnywhere)
    bool _distributeStalkRate;
    
    UPROPERTY(EditAnywhere)
    bool _canStalkWhileInChase;
    
    UPROPERTY(Export, Transient)
    TArray<UStalkedComponent*> _playerStalkedComponents;
    
    UPROPERTY(Export)
    UChargeableComponent* _stalkPointsChargeable;
    
public:
    UStalkerComponent();
private:
    UFUNCTION()
    void OnPlayerBeingStalkedChanged(bool isBeingStalked);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStalkingSomeone() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMaxStalkPoints() const;
    
    UFUNCTION(BlueprintPure)
    float GetTotalStalkingPoints() const;
    
    UFUNCTION(BlueprintPure)
    float GetScoreMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetPercentStalkingPoints() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxStalkingPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStalk() const;
    
};

