#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EAIEvadeLoopSides.h"
#include "DBDNavEvadeLoopComponent.generated.h"

class UNavigationQueryFilter;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDNavEvadeLoopComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector EvadeDoorExtent;
    
    UPROPERTY(EditAnywhere)
    float EvadeDoorFrontPointOffset;
    
    UPROPERTY(EditAnywhere)
    float EvadeDoorSideOffset;
    
    UPROPERTY(EditAnywhere)
    float SideBlockerOffset;
    
    UPROPERTY(EditAnywhere)
    float AutoSnapPointsUpHeight;
    
    UPROPERTY(EditAnywhere)
    float AutoSnapPointsDownHeight;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> AutoSnapCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> EvadeLoopFilterClass;
    
    UPROPERTY(EditAnywhere)
    float MinSafetyLength;
    
    UPROPERTY(EditAnywhere)
    float MaxSafetyLength;
    
    UPROPERTY(EditAnywhere)
    EAIEvadeLoopSides LimitToSide;
    
    UPROPERTY(EditAnywhere)
    bool DebugEditMode;
    
    UPROPERTY(EditAnywhere)
    bool DrawDebugFilter;
    
    UDBDNavEvadeLoopComponent();
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};

