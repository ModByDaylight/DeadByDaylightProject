#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DateTimeProvider.generated.h"

UCLASS(Abstract)
class SYSTEMUTILITIES_API UDateTimeProvider : public UObject {
    GENERATED_BODY()
public:
    UDateTimeProvider();
};

