#pragma once
#include "CoreMinimal.h"
#include "TaskContainer.generated.h"

class UDownloadMultiTextureTask;

USTRUCT(BlueprintType)
struct FTaskContainer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UDownloadMultiTextureTask* DownloadTask;
    
    DYNAMICCONTENT_API FTaskContainer();
};

