#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AnimationMapping.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FAnimationMapping : public FDBDTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> MontageAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Tags;
    
private:
    UPROPERTY(Transient)
    UAnimMontage* _montage;
    
    UPROPERTY(Transient)
    bool _loadAttempted;
    
public:
    FAnimationMapping();
};

