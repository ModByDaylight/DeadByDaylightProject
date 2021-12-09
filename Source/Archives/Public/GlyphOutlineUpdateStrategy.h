#pragma once
#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "GlyphOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew)
class UGlyphOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy {
    GENERATED_BODY()
public:
    UGlyphOutlineUpdateStrategy();
};

