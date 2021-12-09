#pragma once
#include "CoreMinimal.h"
#include "ETileSpawnPointType.h"
#include "ElementSubstitutions.h"
#include "SubstitutionElements.h"
#include "DependencyElementSubstitutions.generated.h"

USTRUCT(BlueprintType)
struct FDependencyElementSubstitutions : public FElementSubstitutions {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubstitutionElements> _replacements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETileSpawnPointType _type;
    
public:
    DEADBYDAYLIGHT_API FDependencyElementSubstitutions();
};

