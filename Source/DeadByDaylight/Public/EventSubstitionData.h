#pragma once
#include "CoreMinimal.h"
#include "GameplayElementSubstitutions.h"
#include "DependencyElementSubstitutions.h"
#include "GameplayElementAddition.h"
#include "DependencyElementAddition.h"
#include "EventSubstitionData.generated.h"

USTRUCT(BlueprintType)
struct FEventSubstitionData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _allowSubstitutionInKYF;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _baseNumOfSubstitutionPerGroup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayElementSubstitutions> _gameplaySubstitutionElements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDependencyElementSubstitutions> _dependencySubstitutionElements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDependencyElementAddition> _dependencyElementAdditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayElementAddition> _gameplayElementAdditions;
    
public:
    DEADBYDAYLIGHT_API FEventSubstitionData();
};

