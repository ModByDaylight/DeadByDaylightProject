#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WhiteGlyphSurfaceComponent.generated.h"

class AGlyph;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UWhiteGlyphSurfaceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWhiteGlyphSurfaceComponent();
protected:
    UFUNCTION(BlueprintPure)
    AGlyph* GetOwningGlyph() const;
    
};

