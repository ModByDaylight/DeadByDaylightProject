#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PropertyParser.generated.h"

class UActorComponent;

UCLASS(BlueprintType)
class COREUTILITIES_API UPropertyParser : public UObject {
    GENERATED_BODY()
public:
    UPropertyParser();
    UFUNCTION(BlueprintCallable)
    static void CopyProperties(UActorComponent* dest, const UActorComponent* origin, bool copyTransform, TArray<FName> propertiesToExclude);
    
};

