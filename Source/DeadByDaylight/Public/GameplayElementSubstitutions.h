#pragma once
#include "CoreMinimal.h"
#include "ElementSubstitutions.h"
#include "SubstitutionElements.h"
#include "EGameplayElementType.h"
#include "GameplayElementSubstitutions.generated.h"

USTRUCT(BlueprintType)
struct FGameplayElementSubstitutions : public FElementSubstitutions {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubstitutionElements> _replacements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayElementType _type;
    
public:
    DEADBYDAYLIGHT_API FGameplayElementSubstitutions();
};

