#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "DBDNavModifierComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool ForceUseFailsafeExtent;
    
    UPROPERTY(EditDefaultsOnly)
    float UpdateModifierInterval;
    
    UPROPERTY(EditDefaultsOnly)
    bool StartNavigationRelevant;
    
    UPROPERTY(EditDefaultsOnly)
    bool AlwaysTickToCheckTransform;
    
    UPROPERTY(EditDefaultsOnly)
    bool RelevantPassiveMode;
    
    UDBDNavModifierComponent();
};

