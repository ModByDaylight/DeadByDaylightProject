#pragma once
#include "CoreMinimal.h"
#include "ECatalogStatus.generated.h"

UENUM()
enum class ECatalogStatus {
    NotReady,
    Updating,
    Fetched,
};

