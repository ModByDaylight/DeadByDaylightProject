#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "MagicFountainOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UMagicFountainOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _outlineColor;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFountainCorrupted(const bool corrupted);
    
    UMagicFountainOutlineUpdateStrategy();
};

