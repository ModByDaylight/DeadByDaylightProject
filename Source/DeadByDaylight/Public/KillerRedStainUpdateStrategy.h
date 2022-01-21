#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "KillerRedStainUpdateStrategy.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UKillerRedStainUpdateStrategy : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _stealthRatioToRedStainIntensityCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _hideRedStainStateTags;
    
public:
    UKillerRedStainUpdateStrategy();
private:
    UFUNCTION()
    void OnHeadHiddenChanged(bool isHidden);
    
};

