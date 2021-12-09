#pragma once
#include "CoreMinimal.h"
#include "PathStrategy_Flee.h"
#include "PathStrategy_FleeLOS.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UPathStrategy_FleeLOS : public UPathStrategy_Flee {
    GENERATED_BODY()
public:
    UPathStrategy_FleeLOS();
};

