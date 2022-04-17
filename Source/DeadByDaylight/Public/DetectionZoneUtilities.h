#pragma once
#include "CoreMinimal.h"
#include "EDetectionZone.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "DetectionZoneUtilities.generated.h"

class ADBDPlayer;
class UPhysicalMaterial;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDetectionZoneUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDetectionZoneUtilities();
    UFUNCTION(BlueprintPure)
    static bool DetectObstruction(const ADBDPlayer* player, EDetectionZone detectionZoneID, UPhysicalMaterial*& physicalMaterialOut, FVector& positionOut, FVector& normalOut);
    
};

