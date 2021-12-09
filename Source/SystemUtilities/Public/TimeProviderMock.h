#pragma once
#include "CoreMinimal.h"
#include "DateTimeProvider.h"
#include "TimeProviderMock.generated.h"

UCLASS()
class UTimeProviderMock : public UDateTimeProvider {
    GENERATED_BODY()
public:
    UTimeProviderMock();
};

