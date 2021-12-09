#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ContextEventData.generated.h"

USTRUCT()
struct FContextEventData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString ContextGroupName;
    
    UPROPERTY(Transient)
    uint32 ContextGroupUid;
    
    UPROPERTY(Transient)
    FString PreviousContextName;
    
    UPROPERTY(Transient)
    FString CurrentContextName;
    
    UPROPERTY(Transient)
    uint32 CurrentContextUid;
    
    UPROPERTY(Transient)
    FString NextContextName;
    
    UPROPERTY(Transient)
    uint32 NextContextUid;
    
    UPROPERTY(Transient)
    FDateTime Timestamp;
    
    DEADBYDAYLIGHT_API FContextEventData();
};

