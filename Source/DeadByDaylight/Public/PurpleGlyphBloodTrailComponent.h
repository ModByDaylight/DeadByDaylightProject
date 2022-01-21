#pragma once
#include "CoreMinimal.h"
#include "BloodTrailComponent.h"
#include "PurpleGlyphBloodTrailComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPurpleGlyphBloodTrailComponent : public UBloodTrailComponent {
    GENERATED_BODY()
public:
    UPurpleGlyphBloodTrailComponent();
    UFUNCTION(BlueprintCallable)
    void DeactivateGlyphBloodTrail();
    
};

