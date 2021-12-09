#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TerrorRadiusReceiverComponent.generated.h"

class UCurveFloat;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UTerrorRadiusReceiverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged OnIsInTerrorRadiusChanged;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _trVerticalDistanceFactor;
    
    UPROPERTY(EditAnywhere)
    float _heartbeatMasterVolumeInterpolationSpeed;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInTerrorRadiusRange() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInTerrorRadius() const;
    
    UTerrorRadiusReceiverComponent();
};

