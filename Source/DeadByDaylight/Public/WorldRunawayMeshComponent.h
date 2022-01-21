#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "WorldRunawayMeshComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UWorldRunawayMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ResetCooldown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _runAwayMustTickDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _returnMustTickDuration;
    
public:
    UWorldRunawayMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetShouldRunAwayWithRandomDelay(bool should, float delayRange);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldRunAwayWithDelay(bool should, float delay);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldRunAway(bool should);
    
    UFUNCTION(BlueprintPure)
    bool GetShouldRunAway() const;
    
};

