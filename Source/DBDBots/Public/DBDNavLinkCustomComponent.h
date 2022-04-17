#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "Engine/EngineTypes.h"
#include "DBDNavLinkCustomComponent.generated.h"

class ANavLinkProxy;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDNavLinkCustomComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector BaseLinkRelativeStart;
    
    UPROPERTY(EditDefaultsOnly)
    FVector BaseLinkRelativeEnd;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ENavLinkDirection::Type> BaseLinkDirection;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoSnapSmartLinkPointsUpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoSnapSmartLinkPointsDownHeight;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> AutoSnapCollisionChannel;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoSmartLinkDirectionMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool DisableSmartLinkOnPathObstruction;
    
    UPROPERTY(EditDefaultsOnly)
    float PathObstructionTestDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float PathObstructionTestShapeRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float PathObstructionTestHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> PathObstructionCollisionChannel;
    
    UPROPERTY(EditDefaultsOnly)
    bool DisableOtherSmartLinkInProximityOnEnable;
    
    UPROPERTY(EditDefaultsOnly)
    bool EnableOtherSmartLinkInProximityOnDisable;
    
    UPROPERTY(EditDefaultsOnly)
    float OtherSmartLinkInProximitySearchDistance;
    
    UPROPERTY(EditAnywhere)
    bool ShowDebugInfo;
    
private:
    UPROPERTY()
    TArray<ANavLinkProxy*> _navLinkProxyInProximity;
    
public:
    UDBDNavLinkCustomComponent();
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};

