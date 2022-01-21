#pragma once
#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "GeneratorOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGeneratorOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _unrepairedAuraColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _fullyRepairedAuraColor;
    
public:
    UGeneratorOutlineUpdateStrategy();
    UFUNCTION(BlueprintPure)
    FLinearColor GetYellowColor() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetWhiteColor() const;
    
};

