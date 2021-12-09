#pragma once
#include "CoreMinimal.h"
#include "FK26AttachedCrowRemovalReason.h"
#include "K26AttachmentStatus.generated.h"

USTRUCT(BlueprintType)
struct FK26AttachmentStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    FK26AttachedCrowRemovalReason LastRemovalReason;
    
    UPROPERTY()
    bool IsAttached;
    
    THEK26_API FK26AttachmentStatus();
};

