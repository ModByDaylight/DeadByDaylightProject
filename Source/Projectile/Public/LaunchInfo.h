#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "LaunchInfo.generated.h"

USTRUCT(BlueprintType)
struct PROJECTILE_API FLaunchInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FVector_NetQuantize StartPosition;
    
    UPROPERTY(BlueprintReadOnly)
    FVector_NetQuantizeNormal Direction;
    
    UPROPERTY(BlueprintReadOnly)
    float Speed;
    
public:
    FLaunchInfo();
};

