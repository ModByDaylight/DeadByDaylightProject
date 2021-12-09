#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "InteractionPlayerProperties.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FInteractionPlayerProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector_NetQuantize AverageVelocityAtStart;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector_NetQuantize PlayerPositionAtStart;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRotator PlayerRotationAtStart;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<ADBDPlayer> Requester;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector_NetQuantize SnapPositionAtStart;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRotator SnapRotationAtStart;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SnapDistanceAtStart;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SnapTimeAtStart;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool ShouldSnapPosition;
    
    DEADBYDAYLIGHT_API FInteractionPlayerProperties();
};

