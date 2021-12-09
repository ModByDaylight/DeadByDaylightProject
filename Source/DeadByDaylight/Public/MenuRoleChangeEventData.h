#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "MenuRoleChangeEventData.generated.h"

USTRUCT()
struct FMenuRoleChangeEventData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EPlayerRole PlayerRole;
    
    DEADBYDAYLIGHT_API FMenuRoleChangeEventData();
};

