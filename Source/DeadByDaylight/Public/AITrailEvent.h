#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GenericTeamAgentInterface.h"
#include "AITrailEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FAITrailEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag IgnoreOnPerkTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGenericTeamId TeamIdentifier;
    
    FAITrailEvent();
};

