#pragma once
#include "CoreMinimal.h"
#include "BloodTrailComponent.h"
#include "PurpleGlyphBloodTrailComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPurpleGlyphBloodTrailComponent : public UBloodTrailComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateGlyphBloodTrail();
    
    UPurpleGlyphBloodTrailComponent();
};

