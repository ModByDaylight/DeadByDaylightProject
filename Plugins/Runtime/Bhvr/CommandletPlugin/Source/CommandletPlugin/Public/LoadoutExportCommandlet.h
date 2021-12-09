#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "LoadoutExportCommandlet.generated.h"

UCLASS(NonTransient)
class ULoadoutExportCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    ULoadoutExportCommandlet();
};

