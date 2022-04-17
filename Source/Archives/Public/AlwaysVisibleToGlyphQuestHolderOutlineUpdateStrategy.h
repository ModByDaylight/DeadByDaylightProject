#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "AlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _outlineColor;
    
    UPROPERTY(EditDefaultsOnly)
    FName _glyphQuestId;
    
public:
    UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy();
};

